#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str;
cout<<"Enter str : ";
getline(cin,str);
int n=str.size();
sort(str.begin(),str.end());
cout<<str;
}