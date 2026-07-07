#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Queue{
  // incomplete code, 
  public:
    int f;
    int b;
    int s;
    vector<int>v;
    Queue(int val){
      f=0;
      b=0;
      s=0;
    }
    void push(int val){
    if(b==v.size()){ 
      cout<<"Queue is full"<<endl;
      return ;
    }
    else{
      v[b]=val;
      b++;
      s++;
    }
  }
  void pop(){
    if(s==0){
      cout<<"Queue is empty"<<endl;
      return;
    }
    else{
      f++;
      s--;
    }
  }
  int front(){
    if(s==0){
      cout<<"Queue is empty"<<endl;
      return -1;
    }
    else{
      return v[f];
    }
  }
  int back(){
    if(s==0){
      cout<<"Queue is empty"<<endl;
    }
    else {
      return v[b-1];
    }
  }
  int size(){
    return s;
  }
  bool empty(){
    if(s==0) return true;
    else return false;
  }
  void display(){
    for(int i=f;i<b;i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
  }
};

int main(){
  Queue q(5);
  q.push(0);
  q.push(1);
  q.push(2);
  q.push(3);   
  q.pop();
  q.push(4);
  q.pop();
  cout<<q.front()<<endl;
  cout<<q.back()<<endl;
  q.display();
  q.push(5);
  cout<<q.size()<<endl;
  q.push(6);
  cout<<q.empty()<<endl;
  return 0;
}