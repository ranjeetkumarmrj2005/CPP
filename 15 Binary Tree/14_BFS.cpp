
#include<iostream>
#include<vector>
#include<queue>
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

void bfs(Node* root){

    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        Node* curr = q.front();
        q.pop();

        cout << curr->val << " ";

        if(curr->left)
            q.push(curr->left);

        if(curr->right)
            q.push(curr->right);
    }
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
    return 0;
}