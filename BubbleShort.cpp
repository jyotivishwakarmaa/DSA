#include<iostream>
using namespace std;

void bubble(int arr[], int s){
    int tmp;
    int count=0;
    bool t;

    for(int i=0; i<s; i++){

        t=true;

        for(int j=0; j<s-i-1; j++){
            count++;
            if(arr[j]>arr[j+1]){

                tmp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tmp;

                t=false;
            }
        }
        if(t==true){
            break;
        }
    }
    for(int i=0; i<s; i++){

        cout<<arr[i]<<"\t";
    }
    cout<<"\n counter hit = "<<count;
}

int main(){

    int arr[]={1,2,3,4,5};
    int s= sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<s; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\nafter applying bubble sort\n ";
    bubble(arr,s);
}