#include<iostream>
#include<vector>
#include<queue>
#include<climits>
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

void levelOrderQueue(Node* root){
    // Print tree in level-order (BFS) using a queue
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
            Node* temp=q.front();
            q.pop();
            cout<<temp->val<<" ";
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}

Node* costructBTBFS(vector<int>&v){
  if(v.empty()) return NULL;
  queue<Node*>q;
  Node* root=new Node(v[0]);
  q.push(root);
  // i and j point to the left and right child positions in the BFS vector
  int i=1;
  int j=2;
  while(q.size()>0 && i<v.size()){
    Node* temp=q.front();
    q.pop();

    Node* l;
    Node* r;

    // Create left child if not INT_MIN
    if(v[i]!=INT_MIN) l=new Node(v[i]);
    else l=NULL;

    // Create right child if in bounds and not INT_MIN
    if(j<v.size() && v[j]!=INT_MIN) r=new Node(v[j]);
    else r=NULL;

    temp->left=l;
    temp->right=r;

    if(l!=NULL) q.push(l);
    if(r!=NULL) q.push(r);

    i=i+2;
    j=j+2;
  }
  return root;
}
void leftBoundary(Node* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return ;
    
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL)leftBoundary(root->right);
}

void bottomBoundary(Node* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) {
        cout<<root->val<<" ";
        return;
    }
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

void rightBoundary(Node* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return ;
    
    rightBoundary(root->right);
    if(root->right==NULL)rightBoundary(root->left);
    cout<<root->val<<" ";

}
int main(){
    vector<int>v={
        1,
        2,3,
        4,5,INT_MIN,6,
        7,INT_MIN,8,INT_MIN,9,10,
        INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,
        15,16,INT_MIN,17,18,INT_MIN,
        19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,
        INT_MIN,24,25,26,INT_MIN,29,INT_MIN,28,INT_MIN,INT_MIN
    };
    Node* root=costructBTBFS(v);
    leftBoundary(root);
    bottomBoundary(root);
    rightBoundary(root->right);;

    //levelOrderQueue(root);
    
}
