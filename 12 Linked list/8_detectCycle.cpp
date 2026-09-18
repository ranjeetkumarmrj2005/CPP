

#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    ListNode* next;
    int val;
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};

ListNode* detetCylce(ListNode* head){
    unordered_map<ListNode*,bool>m;
    ListNode* temp=head;
    int count=1;
    while(temp!=NULL){
        if(m.find(temp)!=m.end()) break;
        else {
            m[temp]=true;
            temp=temp->next;
        }
    }
    return temp;
}
int main(){
    ListNode*head=new ListNode(1);
    ListNode*b=new ListNode(2);
    ListNode*c=new ListNode(0);
    ListNode*d=new ListNode(-4);
    head->next=b;
    b->next=c;
    c->next=d;
    d->next=b;
    ListNode* loopStart=detetCylce(head);
    cout<<loopStart->val<<endl;
    return 0;
}