#include <iostream>
#include<stack>
using namespace std;
void print(stack<int>&st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();   
    }
}

void pushAtBottom(stack<int>&st,int val1){
    stack<int>temp;
    
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    temp.push(val1);

    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();   
    }
    cout<<endl;
} 

void pushAtIdx(stack<int>&st,int idx,int val2){
     stack<int>temp;
    
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }

    temp.push(val2);

    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();   
    }
    cout<<endl;
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);

    int val1=0;
    pushAtBottom(st,val1);

    print(st);

    int val2=-10;
    pushAtIdx(st,3,val2);

    print(st);
    return 0;
}