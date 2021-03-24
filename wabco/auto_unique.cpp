#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class sample {
    
};

int main(){

    sample s;
    auto_ptr<sample> p1(new sample);                cout<< "p1 addr " << p1.get() << endl;
        
    auto_ptr<sample> p2(p1);                        cout<< "p1 addr " << p1.get() << endl;
         

   
   
   
   
   
   
   
   
   
   
   
    // vector<auto_ptr<sample> > v2;
    // v2.push_back(p2);



}




// void fn(sample *p){cout<<"deleter "<<endl;}

// struct deleter{
//     void operator()(sample *p){
//         cout<<"deleter function object "<<endl;
//     }
// };

// int main() {
//     sample s;

//     // unique_ptr<sample> p1(new sample);  cout<< p1.get() << endl;
//     // unique_ptr<sample> p2 = move(p1);   cout<< p1.get() << endl;
//     // vector<unique_ptr<sample> > v1;
//     // v1.push_back(move(p2));    
            
//     // unique_ptr<sample,deleter> p1((new sample),deleter());          
//     // p1.reset();
    
//     auto f = [](sample *ptr){cout<<"lambda deleter "<<endl;};
//     unique_ptr<sample,decltype(f)> p1((new sample), f);
//     //unique_ptr<sample> p1(new sample);

// }

