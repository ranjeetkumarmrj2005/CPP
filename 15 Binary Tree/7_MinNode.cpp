#include<stdio.h>
#include<iostream>
#include<climits>
using namespace std;
int mul=1;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

int Minimum(Node* root){
    if(root==NULL) return INT_MAX;
    return min(root->val,min(Minimum(root->left),Minimum(root->right)));
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(-1);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    cout<<Minimum(a);
    return 0;
}