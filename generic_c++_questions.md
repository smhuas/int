1) when to use unique_ptr and shared_ptr ?
2) how exactly std::map implemented internally ? ***
3) Write a function to generate all permutations of a given string 


4) std::conditional<>

5) type_traits
#include <type_traits>
// double_ptr_type will be double *
using double_ptr_type = std::add_pointer<double>::type; // adds pointer to a variable 
using double_type = std::remove_pointer<double *>::type; // removes pointer of a variable









@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
1) when to use unique_ptr and shared_ptr ?