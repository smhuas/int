#include <iostream>
#include <unordered_set>
using namespace std;

template<typename T> struct list {T  value; struct list   *next;};

template<typename T>
class mylist{
    list<T> *lst;        
public:    
    mylist():lst(nullptr){}
    void print();
    void add_front(T val);
    void add_back(T val);
    void create_loop();
    bool is_loop();
};

template<typename T>
bool mylist<T>::is_loop()
{
    list<T> *p = lst;
    unordered_set<list<T>*> s;
    while (p != nullptr)
    {
        if(s.find(p) != s.end() ){
            return true;
        }
        s.insert(p);
        p = p->next;    
    }
    return false;
}


template<typename T>
void mylist<T>::create_loop()
{
    list<T> *p = lst;
    while(p->next != nullptr){p->next = p->next->next;};
    p->next = lst;
}

template<typename T>
void mylist<T>::add_back(T val)
{
    list<T> *temp = new list<T>;  temp->value = val; temp->next = nullptr;
    list<T> *p = lst;
    if(lst == nullptr)
    {
        lst = temp;
    } else {
        for(;p->next != nullptr;  p = p->next ); 
        p->next = temp;
    }
}

template<typename T>
void mylist<T>::add_front(T val)
{    
    list<T> *tmp;
    tmp = new list<T>{val,nullptr};    
    if(lst != nullptr){       
        tmp->next = lst;        
    }
    lst = tmp;
}

template<typename T>
void mylist<T>::print()
{
    list<T> *p = lst; 
    if(lst != nullptr){
        while(p != nullptr)
        {
            cout<<p->value;
            p = p->next;
            if(p != nullptr){
                cout<<"->";
            }
        }
        cout<<endl;        
    }else{
        cout<<"list is empty "<<endl;
    }  
}



int main()
{
    mylist<int> l;
    l.add_back(10);
    l.add_back(11);
    l.add_back(12);
    l.create_loop();
    cout<<  l.is_loop() << endl;
    //l.print();
}