#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int binary_to_decimal(string &str){
    int n=str.size();
    int result=0;
    for(int i=0;i<n;i++){
        int bit=str[i]-'0';
        result=result+bit*pow(2,n-1-i);
    }
    return result;
}
int main(){
    string str="1001";
    int result=binary_to_decimal(str);
    cout<<result;
    cout<<endl;
    cout<<__builtin_popcount(9);
    return 0;
}
