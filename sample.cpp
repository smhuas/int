#include <iostream>
#include <experimental/functional>
#include <type_traits>
using namespace std;

using namespace std::placeholders; 

template <int i> struct Factorial
{
  static const int value = i * Factorial<i - 1>::value;
};
 
template <> struct Factorial<0>
{
  static const int value = 1;
};

template <int i, bool c>
  struct NegativeArgument
{
  static const int value = Factorial<i>::value;
};
 
template <int i>
  struct NegativeArgument<i, false>; // not defined
 
template <int i>
  struct SafeFactorial
{
  static const int value = NegativeArgument<i, (i >= 0)>::value;
};

int main()
{
    cout<< Factorial<10>::value <<endl;

}