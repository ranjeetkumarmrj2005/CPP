#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool palindrome(string ans,string &str,int idx){
    if(idx<0) {
        if(str==ans) return true;
        else return false;
    }
    else return palindrome(ans+str[idx],str,idx-1);
}
int main(){
string str="abcdcba";
int n=str.size();
bool x=palindrome("",str,n-1);
cout<<x;
return 0;
}