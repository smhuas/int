#include <iostream>
using namespace std;

int main()
{
    initializer_list<int> a = {1,2,3,4,5};
    for(auto i:a)
    {
        cout<<i<<endl;
    }
}