#include <iostream>
#include<stack>
using namespace std;
int prio(char ch){
  if(ch=='+'||ch=='-') return 1;
  else return 2;
}
int solve(int val1, int val2, char ch){
  if(ch=='+') return val1+val2;
  else if(ch=='-') return val1-val2;
  else if(ch=='*') return val1*val2;
  else return val1/val2;
}
int main(){
  stack<int>val;
  stack<char>oper;
  string s="1+(2+6)*4/8+3";
  for(int i=0;i<s.size();i++){
    if(s[i]>=48 && s[i]<=57) val.push(s[i]-48);
    else{
      if(oper.size()==0) oper.push(s[i]);
      else if(s[i]=='(') oper.push(s[i]);
      else if(oper.top()=='(') oper.push(s[i]);
      else if(s[i]==')'){
        while(oper.top()!='(') {
          char ch=oper.top();
          oper.pop();
          int val2=val.top();
          val.pop();
          int val1=val.top();
          val.pop();
          int ans=solve(val1, val2, ch);
          val.push(ans);
        }
        oper.pop();
      }
      else if(prio(s[i])>prio(oper.top())) oper.push(s[i]);
      else{
        while(oper.size()>0 && prio(s[i])<=prio(oper.top())) {
          char ch=oper.top();
          oper.pop();
          int val2=val.top();
          val.pop();
          int val1=val.top();
          val.pop();
          int ans=solve(val1, val2, ch);
          val.push(ans);
        }
        oper.push(s[i]);
      }
    }
  }
  while(oper.size()>0){
  char ch=oper.top();
  oper.pop();
    int val2=val.top();
    val.pop();
    int val1=val.top();
    val.pop();
    int ans=solve(val1, val2, ch);
    val.push(ans);
  }
  cout<<val.top();
  return 0;
}