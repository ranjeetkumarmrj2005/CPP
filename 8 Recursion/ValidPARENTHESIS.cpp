#include<iostream>
#include<vector>
using namespace std;
void validparenthesis(string s,vector<string>&Ans,int open,int close,int n){
if(close==n) {
    Ans.push_back(s);
    return;
}
if(open<n) validparenthesis(s+'(',Ans,open+1,close,n);
if(close<open) validparenthesis(s+')',Ans,open,close+1,n);
}
int main(){
vector<string>Ans;
int n=3;
int open=0;
int close=0;
validparenthesis("",Ans,open,close,n);
for(int i=0;i<Ans.size();i++){
    cout<<Ans[i]<<endl;
}
return 0;
}
