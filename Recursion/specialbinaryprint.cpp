#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void generatestring(string s,int n){
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    generatestring(s+'0',n);
    if(s==""||s[s.size()-1]=='0' )generatestring(s+'1',n);
}
int main(){
int n=4;
generatestring("",n);
return 0;
}