#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Queue{
public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head=tail=NULL;
        size=0;
    }
    void push(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
  
    void pop(){
        if(size==0){
            cout<<"List is empty";
            return ;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    
    int front(){
      if(size==0){
        cout<<"list is empty";
        return -1;
      }
      else{
        return tail->val;
      }
    }

    int back(){
      if(size==0){
        cout<<"list is empty";
        return -1;
      }
      else return head->val;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next; 
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.display();

    q.pop();
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.back()<<endl;
    q.display();
    return 0;
}