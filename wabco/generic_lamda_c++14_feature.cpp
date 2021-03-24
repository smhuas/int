#include <iostream>

using namespace std;
// Generic lambda expressions. 
// allowing auto in lambda's.
int main()
{
    auto f = [](auto x){return x;};
    int three = f(3);               // can pass int
    string s = f("hello");          // can pass string also.
}