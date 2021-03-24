#include <iostream>
using namespace std;

template<typename T>
T add(T arg)
{
    return arg;
}

template<typename T,typename ...T1>
T add(T arg1, T1... arg2)
{
    return (arg1 + add(arg2...));
}

int main()
{
    cout<<add<int>(1.2,2.4,3.6,4.7)<<endl;
}