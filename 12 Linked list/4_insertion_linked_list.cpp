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
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void InsertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void InsertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void InsertAtIdx(int idx,int val){
        if(idx<0||idx>=size) {
            cout<<"idx invalid";
            return ;
        }
        else if(idx==0) InsertAtHead(val);
        else if(idx==size-1) InsertAtTail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"Empty list";
            return ;
        }
        else{
            head=head->next;
            size--;
        }        
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"Empty list";
            return ;
        }
        else{
            Node* temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=NULL;
            tail=temp;
            size--;
        }
    }
    void deleteAtIdx(int idx){
        if(idx<0||idx>=size){
            cout<<"invalid idx";
            return ;
        }
        else if(idx==0) {
            deleteAtHead();
            return ;
        }
        else if(idx==size-1){
            deleteAtTail();
            return ;
        }
        else{
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    int getAtIdx(int idx){
            if(idx<0||idx>=size){
            cout<<"invalid idx";
            return -1;
        }
        else if(idx==0) head->val;
        else if(idx==size-1) tail->val;
        else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void display(){
        Node* temp=head;
        while(temp->next!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.InsertAtTail(10);// {10->NULL}
    ll.display();
    ll.InsertAtTail(20);// {10->20->NULL} 
    ll.display();
    ll.InsertAtTail(30);
    ll.InsertAtTail(40);
    ll.display();
    ll.InsertAtHead(15);
    ll.InsertAtHead(25);
    ll.display();
    ll.InsertAtIdx(2,35);// 25->15->35->10->20->30->40->NULL;
    ll.display();
    cout<<ll.getAtIdx(2)<<endl;
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(3);   
    ll.display();
    cout<<ll.size;
    return 0;
}