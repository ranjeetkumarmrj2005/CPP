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


void Nth_level(Node* root, int current_level, int target_level){
    if(root==NULL) return;
    if(current_level==target_level) {
        cout<<root->val<<" ";
        return;
    }
    Nth_level(root->left, current_level+1, target_level);
    Nth_level(root->right, current_level+1, target_level); 
}


// void Nth_level(Node* root, int current_level, int target_level){
//     if(root==NULL) return;
//     if(current_level==target_level) cout<<root->val<<" ";
//     Nth_level(root->left, current_level+1, target_level);
//     Nth_level(root->right, current_level+1, target_level); 
// }


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
cout<<endl;
Nth_level(a,1,2);
 
 return 0;
}