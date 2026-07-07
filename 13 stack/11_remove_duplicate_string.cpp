#include <iostream>
#include<stack>
using namespace std;
void removeduplicate(string &s){
    if(s.size()==0) return;
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        char ch=s[i];
        if(st.top()!=ch) st.push(ch);
        else{
            st.push(ch);
            st.pop();
        }
    }
    while(st.size()>0){
        cout<<st.top();
        st.pop();
    }
}
int main(){
    
    string s="aaafvnkjnccijj";
    removeduplicate(s);
    return 0;
}