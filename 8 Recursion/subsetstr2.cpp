#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subsetstr(string ans,string original,vector<string>&v){
if(original.size()==0){
    v.push_back(ans);
    return;
}
char ch=original[0];
subsetstr(ans+ch,original.substr(1),v);
subsetstr(ans,original.substr(1),v);
}
int main(){
vector<string>v;
string str="abc";
subsetstr("",str,v);
for(string nums:v){
cout<<nums<<" ";
}
return 0;
}