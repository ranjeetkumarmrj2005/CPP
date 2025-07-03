#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(4,7);
    cout<<v[0];
    cout<<v[1];
    cout<<v[2];
    cout<<v[3]<<endl;
    vector<int>u(5);
    for(int i=0;i<u.size();i++){
        cin>>u[i];
    }
    cout<<endl;
    for(int i=0;i<u.size();i++){
        cout<<u[i];
    }
    return 0;
} 