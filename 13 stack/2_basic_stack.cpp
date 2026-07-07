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

    stack<int>temp_st;

    while(st.size()>0){
        cout<<st.top()<<" ";
        temp_st.push(st.top());
        st.pop();
    }

    cout<<endl;

    while(temp_st.size()>0){
        cout<<temp_st.top()<<" ";
        st.push(temp_st.top());
        temp_st.pop();   
    }
    return 0;
}