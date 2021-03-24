// thread1.c
#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <mutex>
#include <condition_variable>
using namespace std;
int res = 0;
std::mutex mtx;
std::condition_variable cv;

void* worker_thread_1(void *args)
{
    unique_lock<mutex> lk(mtx);
    
    while(res <= 50){
        if((res%2) != 0 ){
            cv.wait(lk);
        }
        cout<< "thread1: even   "<< res <<endl;
        ++res;
        cv.notify_one();
    }           
}

void* worker_thread_2(void *args)
{
    unique_lock<mutex> lk(mtx);
    while(res <= 50)
    {
        if((res%2) == 0 ){
            cv.wait(lk);
        }
        cout<< "thread2: odd    "<< res <<endl;
        ++res;        
        cv.notify_one();
    }    
}

int main()
{
    pthread_t t_id1,t_id2;
    int ret;

    if(0 != pthread_create(&t_id1,NULL,worker_thread_1,NULL))
    {
        cout<<"thread1 creation failed "<<endl;
    }
    if(0 != pthread_create(&t_id2,NULL,worker_thread_2,NULL))
    {
        cout<<"thread2 creation failed "<<endl;
    }

    pthread_join(t_id1,NULL);
    pthread_join(t_id2,NULL);

}

