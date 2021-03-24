#include <iostream>
#include <functional>
using namespace std;
using namespace std::placeholders; 

void func(int&& x)
{
    cout<<x<<endl;
}


void justforward(int&& x)
{
    func(forward<int>(x));
}

int main()
{

 int x = 20;
 int&& y = move(x);

 justforward(std::forward<int>(y));
    
     
      
   
}