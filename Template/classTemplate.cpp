#include<iostream>
using namespace std;

template <typename x1, typename x2>

class Cybrom{

    public: void sum(x1 t1, x2 t2){
        cout<<t1+t2;
    }
};
int main(){

Cybrom<int, int>b;
b.sum(3,4);

}