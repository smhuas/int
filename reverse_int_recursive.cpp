/*
    Reverse the integer using recursive way
*/
#include <iostream>
using namespace std;

int rev(int a)
{
    static int r = 0;
    r = r*10 + a%10 ;  
    if(a/10){
        rev(a/10);
    }else { 
        return r;
    }   
}

int main()
{     
    cout<< rev(123456783) << endl;
    cout << 234%10 << endl;
    cout << 2345/10 << endl;
}