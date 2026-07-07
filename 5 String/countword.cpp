#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
string s;
cout<<"Enter string : ";
getline(cin,s);
vector<string>v;
stringstream ss(s);
string temp;
while(ss>>temp){
    v.push_back(temp);
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
int maxcount=0;
for(int i=0;i<v.size();i++){
    int count=1;
    for(int j=i+1;j<v.size();j++){
        if(v[i]==v[j]) count++;
    }
    if(count>maxcount) maxcount=count;
}
cout<<maxcount;
}