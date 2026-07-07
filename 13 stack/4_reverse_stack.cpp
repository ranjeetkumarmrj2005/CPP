#include <iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    stack<int>temp1_st;
    stack<int>temp2_st;

    while(st.size()>0){
        temp1_st.push(st.top());
        st.pop();
    }
    while(temp1_st.size()>0){
        cout<<temp1_st.top()<<" ";
        temp2_st.push(temp1_st.top());
        temp1_st.pop();   
    }
    while(temp2_st.size()>0){
        st.push(temp2_st.top());
        temp2_st.pop();
    }
    return 0;
}