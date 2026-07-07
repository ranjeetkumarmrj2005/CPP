#include<iostream>
#include<stack>
using namespace std;
class Queue{
  public:
    int f;
    int b;
    int arr[5];
    Queue(){
      f=0;
      b=0;
    }
    void push(int val){
    if(b==5){ 
      cout<<"Queue is full"<<endl;
      return ;
    }
    else{
      arr[b]=val;
      b++;
    }
  }
  void pop(){
    if(b-f==0){
      cout<<"Queue is empty"<<endl;
      return;
    }
    else{
      f++;
    }
  }
  int front(){
    if(b-f==0){
      cout<<"Queue is empty"<<endl;
      return -1;
    }
    else{
      return arr[f];
    }
  }
  int back(){
    if(f-b==0){
      cout<<"Queue is empty"<<endl;
    }
    else {
      return arr[b-1];
    }
  }
  int size(){
    return b-f;
  }
  bool empty(){
    if(b-f==0) return true;
    else return false;
  }
  void display(){
    for(int i=f;i<b;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};

int main(){
  Queue q;
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