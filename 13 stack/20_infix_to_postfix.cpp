#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
  if(ch=='+'||ch=='-') return 1;
  else return 2;
}

string solve(string val1, string val2, char ch){
  string ans="";
  ans+=val1;
  ans+=val2;
  ans.push_back(ch);
  return ans;
}
int main(){
  stack<char>oper;
  stack<string>val;
  string s="(7+9)*4/8-3";
  for(int i=0;i<s.size();i++){
    if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-48));
    else{
      if(oper.size()==0) oper.push(s[i]);
      else if(s[i]=='(') oper.push(s[i]);
      else if(oper.top()=='(') oper.push(s[i]);
      else if(s[i]==')') {
        while(oper.top()!='('){
          
          string val2=val.top();
          val.pop();
          string val1=val.top();
          val.pop();
          char ch=oper.top();
          oper.pop();
          string ans=solve(val1, val2, ch);
          val.push(ans);
        }
        oper.pop();
      }
      else if(priority(s[i])>priority(oper.top())) oper.push(s[i]);
      else{
        while(oper.size()>0 && priority(s[i])<=priority(oper.top())){
          
          string val2=val.top();
          val.pop();
          string val1=val.top();
          val.pop();
          char ch=oper.top();
          oper.pop();
          string ans=solve(val1, val2, ch);
          val.push(ans);
        }
        oper.push(s[i]);
      }
    }
  }
  while(oper.size()>0){
    
    string val2=val.top();
    val.pop();
    string val1=val.top();
    val.pop();
    char ch=oper.top();
    oper.pop();
    string ans = solve(val1, val2, ch);
    val.push(ans);
  }
  cout<<val.top();
  return 0;
}