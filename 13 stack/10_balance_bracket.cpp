#include <iostream>
#include<stack>
using namespace std;
bool isbalancebracket(string &s){
    if(s.size()%2!=0) return false;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(st.size()==0) return false;
            else st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false;

}
int main(){
    
    string s="())()(";
    cout<<isbalancebracket(s);
    return 0;
}