#include<iostream>
using namespace std;

  void bubbleSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
         bool isSwapped=true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
              isSwapped=false;
            }
        }
       if(isSwapped==true){
            break;
        }
    }
     
   
  }

 void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
 }
int main(){

    int arr[]={6,3,5,1,4,2};

    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    print(arr,n);

}
