#include<iostream> 
#include<stack>
using namespace std;
string solve(string val1, string val2, char ch){
  string ans="";
  ans=ans+val1;
  ans.push_back(ch);
  ans=ans+val2;
  return ans;
}
int main(){
  stack<char>oper;
  stack<string>val;
  string s="79+4*8/3-";
  for(int i=0;i<s.size();i++){
    if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-48));
    else {
      string val2=val.top();
      val.pop();
      string val1=val.top();
      val.pop();
      string ans=solve(val1, val2, s[i]);
      val.push(ans);
    }
  }
  cout<<val.top();
  return 0;
}