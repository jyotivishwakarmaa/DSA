#include<iostream>
using namespace std;

namespace cybrom{
 
     int a=90;
     int b=100;

     void show(){
        cout<<"result = "<<a+b;
     }

     class bhopal{
        public: 
        int sqr(int a){

            return a*a;
        }
     };
     class iostreamx{
        public: 
        void fun(){
            cout<<"\n fun \n";
        }
        
     }coutx;
}

using namespace cybrom;
int main(){
     bhopal b;
    cout<<a<<"\n";
    cout<<b.sqr(8);
    coutx.fun();
}