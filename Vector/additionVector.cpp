#include<iostream>
using namespace std;
#include<vector>

int main(){

    vector<int>v1{3,1,2,5};
    vector<int>v2{7,2,3,4};
    vector<int>v3;

    for(int i=0; i<v1.size(); i++){

        int result = v1[i]+v2[i];
        v3.push_back(result);
    }
    for(auto p:v3){
        cout<<p<<"\t";
    }
}

