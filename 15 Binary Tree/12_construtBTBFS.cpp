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
// Function: levelOrderQueue
// Prints the binary tree in level-order (breadth-first) using a queue.
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

// Construct a binary tree from a vector given in BFS order.
// INT_MIN in the vector represents a null/missing node.
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
int main(){
    vector<int>v={1,2,3,4,5,INT_MIN,7};
    Node* a=costructBTBFS(v);
    levelOrderQueue(a);
    
    return 0;
}