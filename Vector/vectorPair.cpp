#include<iostream>
using namespace std;
#include<vector>

int main(){

    vector<pair<int, string>>v;

    int roll, n;
    string name;

    cout<<"Enter your records"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){

        cout<<"Enter your roll no"<<endl;
        cin>>roll;
        cout<<"Enter your name:"<<endl;
        cin>>name;
        //v.push_back(make_pair(roll, name));
        v.push_back({roll, name});
    }
    cout<<"result  ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<":"<<v[i].second;
    }
    return 0;
}