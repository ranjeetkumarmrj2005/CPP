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
void reverse(queue<int>&q){
  int n=q.size();
  stack<int>st;
  for(int i=1;i<=n;i++){
    st.push(q.front());
    q.pop();
  }
  for(int i=1;i<=n;i++){
    q.push(st.top());
    st.pop();
  }
}
int main(){
  queue<int>q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);

  display(q);
  q.pop();
  display(q);
  reverse(q);
  display(q);
  return 0;
}