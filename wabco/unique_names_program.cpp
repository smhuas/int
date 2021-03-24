#include <iostream>
#include <vector>
#include <map>
using namespace std;

std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{
    std::vector<std::string> temp; 
    map<string,int> m;    
    for(auto i:names1)
    {
       m[i] = 0;
    }
    for(auto i:names2)
    {
       m[i] = 0;
    }
    for(auto i:m)
    {
        temp.push_back(i.first);
    }

    return temp;
}

#ifndef RunTests
int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    
    std::vector<std::string> result = unique_names(names1, names2);
    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
    
}
#endif