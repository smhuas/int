#include <chrono>
#include <future>
#include <iostream>
using namespace std;


string func(string s)
{
    return s+"world";
}

struct funcObject{
    string operator()(string s)
    {
        return s+"object";
    }
};

int main(){
    auto fut1 = async(func,"hello");
    cout<< fut1.get() << endl;

    auto fut2 = async(std::launch::deferred,func,"my"); // this takes time to execute (Lazy)
    cout<< fut2.get() << endl;

    auto fut3 = async(std::launch::async,func,"Vijay"); // this executes immediately
    cout<< fut3.get() << endl;

    auto fut4 = async([]{return "lambda";});            // lambda
    cout<< fut4.get() << endl;

    auto fut5 = async(funcObject(),"function");         // function object
    cout<< fut5.get() << endl;
}