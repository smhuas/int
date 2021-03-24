#include <iostream>

using namespace std;

class base {
    public:
    base(){cout<<"base ctor "<<endl;}
    virtual ~base(){cout<<"base dtor "<<endl;}
};

class derived: public base {
    public:
    derived(){cout<<"derived ctor "<<endl;}
    ~derived(){cout<<"derived dtor "<<endl;}
};

int main()
{
    base *b = new derived;
    delete b;
}