#include <iostream>

using namespace std;

/*
    observe initialization in lambda capture field. this is allowed from c++14.

*/

int factory(int i) { return i * 10; }

int main()
{
    
auto f = [x = factory(2)] { return x; }; // returns 20

auto generator = [x = 0] () mutable {
  // this would not compile without 'mutable' as we are modifying x on each call
  return x++;
};
auto a = generator(); // == 0
auto b = generator(); // == 1
auto c = generator(); // == 2

cout<<a <<endl;
cout<<b <<endl;
cout<<c <<endl;

}