#include<iostream>
using namespace std;
// this is the normal implementation of the doubly linked list which we will be using to implement the deque data structure but i have not implemented deque
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class Deque{
public:
    Node* head;
    Node* tail;
    int s;
    Deque(){
        head=tail=NULL;
        s=0;
    }
    void Push_Front(int val){
        Node* temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        s++;
    }
    void Push_Back(int val){
        Node* temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        s++;
    }
    
    void Pop_Front(){
        if(s==0){
            cout<<"List is empty";
            return ;
        }
        else {
            head=head->next;
            head->prev=NULL;
            s--;
        }
    }
    void Pop_Back(){
        if(s==0){
            cout<<"List is empty";
            return ;
        }
        tail=tail->prev;
        tail->next=NULL;
        s--;
    }
      int front(){
      if(s==0){
        cout<<"list is empty";
        return -1;
      }
      else{
        return tail->val;
      }
    }

    int back(){
      if(s==0){
        cout<<"list is empty";
        return -1;
      }
      else return head->val;
    }
    int size(){
        return s;
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
    Deque dq;
    dq.Push_Back(10);
    dq.Push_Back(20);
    dq.Push_Back(30);
    dq.Push_Back(40);
    dq.display();
    dq.Pop_Back();
    dq.display();
    dq.Pop_Front();
    dq.display();
    dq.Push_Front(50);
    dq.display();
    
    
    return 0;
}