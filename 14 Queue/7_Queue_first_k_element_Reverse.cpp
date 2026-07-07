#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
  int n=q.size();
  for(int i=1;i<=n;i++){
    int x=q.front();
    cout<<q.front()<<" ";
    q.pop();
    q.push(x);
  }
  cout<<endl;
}
void reverse(queue<int>&q, int k){
  int n=q.size();
  stack<int>st;
  for(int i=1;i<=n-k;i++){
    st.push(q.front());
    q.pop();
  }
  for(int i=1;i<=n-k;i++){
    q.push(st.top());
    st.pop();
  }
}
int main(){
  queue<int>q;
  int k=4;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);
  display(q);
  reverse(q,0);
  reverse(q,k);
  display(q);
  return 0;
}