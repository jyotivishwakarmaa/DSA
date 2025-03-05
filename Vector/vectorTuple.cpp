//in tuple store multiple values
#include<iostream>
using namespace std;
#include<vector>
#include<tuple>

int main(){

    tuple<int, string, int>Student{101, "Joy", 90};
    //Student=make_tuple(101, "Joy",90);

    cout<<"rollno="<<get<0>(Student)<<"\n";
    cout<<"rollno="<<get<1>(Student)<<"\n";
    cout<<"rollno="<<get<2>(Student)<<"\n";

}

