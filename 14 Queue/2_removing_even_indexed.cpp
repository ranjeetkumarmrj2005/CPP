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
void remove_even_index(queue<int>&q){
  int n=q.size();
  stack<int>st;
  for(int i=0;i<=n-1;i++){
    if(i%2==0){
      q.pop();
    }
    else{
      st.push(q.front());
      q.pop();
    } 
  }
  while(st.size()>0){
    q.push(st.top());
    st.pop();
  }
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
  q.push(0);
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);

  display(q);
  remove_even_index(q);
  reverse(q);
  display(q);
  return 0;
}