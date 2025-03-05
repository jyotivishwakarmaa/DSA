#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){
//get second highest element
    array<int ,6>arr{2,6,4,8,80,12};
    sort(arr.begin(), arr.end());

    int s=arr.size();
    int sh=arr[s-1];
    for(int i=s;i>=0;i--){
        if(arr[i]!=sh){
            cout<<arr[i];
            break;
        }
    }
}
