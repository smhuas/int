#include <iostream>
#include <memory>
#include <vector>
using namespace std;



int main()
{
    auto_ptr<int> p1(new int);
    auto_ptr<int> p2(p1);           // copy ctor of auto_ptr is invoked here.

    vector<auto_ptr<int> > v1;
    v1.push_back(p2);           //  auto_ptr(const auto_ptr& obj)
 
}


