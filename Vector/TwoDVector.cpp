#include<iostream>
using namespace std;
#include<vector>

int main(){

    vector<vector<int>>v1;
    int row, col;
    int val;

    cout<<"Enter size of row: \n";
    cin>>row;
    cout<<"Enter size of col: \n";
    cin>>col;

    for(int i=0; i<row; i++){
        vector<int>v2;

        for(int j=0; j<col; j++){

            cout<<"Enter value :\n";
            cin>>val;
            v2.push_back(val);
        }
        v1.push_back(v2);

    }
    cout<<"stored values in 2d vector\n";
    for(int i=0; i<v1.size(); i++){

        for(int j=0; j<v1[i].size(); j++)
        {           
             cout<<v1[i] [j]<<"\t";
        }
        cout<<"\n";
    }
}