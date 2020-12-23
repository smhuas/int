#include <iostream>
#include <vector>
#include <string_view>
using namespace std;


void use_string(string_view sview)
{
    
}

int main()
{
    string_view s("hello");
    cout << s << endl;

    use_string("hello");

}