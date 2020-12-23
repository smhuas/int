#include <iostream>
using namespace std;

void reverse(char *s)
{
    char *t = s;
    while(*t != '\0'){
        if(*(++t) == '\0'){
            cout<<"NULL "<<endl; 
        } else {
            cout<<"not NULL "<< endl;
        }
    }

}

int main()
{    
    reverse("hello");
}