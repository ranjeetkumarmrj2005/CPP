#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
vector<string>v1;
vector<int>v2;
for(int i=0;i<5;i++){
    string s;
    cout<<"Enter string : ";
    cin>>s;
    v1.push_back(s);
    int x=stoi(s);
    v2.push_back(x);
}
sort(v2.begin(),v2.end());
int max=v2[0];
int idx=-1;
for(int i=1;i<v2.size();i++){
if(v2[i]>max) {
    max=v2[i];
    idx=i;
}
}
cout<<max;
}