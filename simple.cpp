#include <iostream>
using namespace std;

class hello {
public:
    hello(){}
    static void body(int i);
};

void hello::body(int i)
{
    cout<< "inside hello::body "<< i << endl;
}

template<int x, int y>
struct great {
    enum { RET = (x > y)? x : y };
};

template <int n, typename B>
struct UNROLL{
    static void iteration(int i) {
        B::body(i);        
        UNROLL<n-1, B>::iteration(i + 1);
    }
};

template <class B>
struct UNROLL<0, B> {
    static void iteration(int i){ }
};

int main() {

    //cout<<great<10,12>::RET << endl;
    UNROLL<5,hello>::iteration(1);

}