#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){

    array<int ,6>arr{2,6,4,8,80,12};
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); i++){

    cout<<arr.at(i)<<endl;
}
    cout<<"first element is :"<<arr.front()<<endl;
    cout<<"last element is :"<<arr.front()<<endl;
    return 0;
}