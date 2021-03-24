#include <iostream>
#include <memory>
using namespace std;

class base {
public:
    base(){cout<<"ctor "<<endl;}
    ~base(){cout<<"dtor "<<endl;}
};

int main()
{
    auto fn = [](base *obj){cout<<"custom deleter "<<endl;};
    unique_ptr<base,decltype(fn)> up(new base,fn);
    up.reset();

    //unique_ptr<base,decltype(fn)> up1 = make_unique<base,decltype(fn)>(fn); 
}