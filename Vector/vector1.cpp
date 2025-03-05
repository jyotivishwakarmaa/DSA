#include<iostream>
using namespace std;
#include<vector>

int main(){

    vector<int>v{3,2,4,1};
    v[1]=90;
    vector<string>v2{"sun", "mon", "tue"}
    for(auto p:v){

        cout<<p<<"\t";    }
}