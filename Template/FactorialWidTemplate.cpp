#include<iostream>
using namespace std;

template<typename t1 a>

class Factorial(){

    public: t1 fact(t1 x){

        t1 f=x;
        for(int i=1; i<x; i++){

            f=f*i;
        }
        return f;
    }
};

int main(){

    int a;
    Factorial<int>b;
    cout<<"Enter no :"<<endl;
    cin>>a;
    cout<<b.fact(a);



}