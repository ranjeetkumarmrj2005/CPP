#include<iostream>
#include<vector>
using namespace std;
int binary_to_decimal(string &str){
    int n=str.size();
    int result=0;
    for(int i= n-1;i>=0;i--){
        char ch=str[i];
        int num=ch-'0';
        result=result+num*(1<<(n-i-1));
    }
    return result;
}
int main(){
    string str="100110";
    int result=binary_to_decimal(str);
    cout<<result;
    return 0;
}
