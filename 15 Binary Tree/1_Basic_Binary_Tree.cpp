#include<iostream>
#include<vector>
using namespace std;

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
void display(Node* root){
  if(root==NULL) return ;
  cout<<root->val<<" ";
  display(root->left);
  display(root->right);
}
int sum(Node* root, int total){
  if(root==NULL) return total;
  total=total+root->val;
  total=sum(root->left,total);
  total=sum(root->right,total);
  return total;
}
int sum(Node* root){
  if(root==NULL) return 0;
  return root->val+sum(root->left)+sum(root->right);
}
void find(Node* root, Node* a, Node* b){
  if(a==root && b==root) return;
  if(a==root )
  find(root->left,a,b);
  find(root->right,a,b);
}


int main(){

  Node* a=new Node(1);
  Node* b=new Node(2);
  Node* c=new Node(3);
  Node* d=new Node(4);
  Node* e=new Node(5);
  Node* f=new Node(6);
  Node* g=new Node(7);

  a->left=b;
  a->right=c;
  b->left=d;  
  b->right=e;
  c->left=f;
  c->right=g;
  display(a);
  find(a,d,g);
  cout<<endl;
  cout<<sum(a,0);
  cout<<endl;
  cout<<sum(a);
  cout<<endl;
 return 0;
}