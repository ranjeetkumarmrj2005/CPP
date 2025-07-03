#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str;
cout<<"Enter str : ";
getline(cin,str);
int n=str.size();
// sort(str.begin(),str.end());
int maxcount=0;
char ch;
for(int i=0;i<n;i++){
    int count=1;
    for(int j=i+1;j<n;j++){
        if(str[i]==str[j]) count++;
          ch=str[i];
}
    if(count>maxcount) maxcount=count;
}
cout<<maxcount;
cout<<endl;
cout<<ch;
}