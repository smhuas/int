#include <iostream>

using namespace std;

class A {
public:
    virtual void func(){cout<<"A func "<<endl;}
};

class B : virtual public A  {
public:
    virtual void func(){cout<<"B func "<<endl;}
};

class C : virtual public A {
public:
    virtual void func(){cout<<"C func "<<endl;}
};

class D  :  public B, public C {
public:
    virtual void func(){cout<<"D func "<<endl;}
};

int main()
{
    A *a = new D;
    a->func();   
}