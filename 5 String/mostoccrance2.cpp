#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
string s;
cout<<"Enter string : ";
getline(cin,s);
vector<int>v(26,0);
for(int i=0;s[i]!='\0';i++){
     char ch=s[i];
     int x=(int)ch -97;
     v[x]++;
}
int count=-1;
int idx=-1;
for(int i=0;i<26;i++){
   if(count<v[i]){
     count=v[i];
     idx=i;
   }
}
char t=(char)(idx+97);
cout<<t<<" "<<count<<endl;
}