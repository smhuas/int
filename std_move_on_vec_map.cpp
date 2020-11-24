/*
    std::move used on vector and map
*/
#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define PRINT_VEC(X) for(auto i:X) {cout<<i<<" ";} cout<<endl
#define PRINT_MAP(X) for(auto i:X) {cout<<i.second<<" ";} cout<<endl

int main()
{
    //vector<int> mvec = {1,2,3,4,5};
    //PRINT_VEC(mvec); cout<<"size of mvec is "<< mvec.size() <<endl;
    //vector<int> vec = move(mvec);
    //PRINT_VEC(mvec); cout<<"size of mvec is "<< mvec.size() <<endl;
    //PRINT_VEC(vec);

    map<int,string> mMap = {{0,"zero"}, {1,"one"}};
    cout<<"size of mMap is "<< mMap.size() <<endl;
    map<int,string> map = move(mMap);
    cout<<"size of mMap is "<< mMap.size() <<endl;
    PRINT_MAP(mMap);

    


    


}