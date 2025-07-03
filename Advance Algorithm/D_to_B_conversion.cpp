#include<iostream>
#include<vector>
using namespace std;
string decimal_to_binary(int x){
    if(x==0) return "0";
    string result="";
    while(x>0){
    char ch =x%2 + '0';
    result=ch+result;
    x=x/2;
    }
    return result;
}
int main(){
    int  x=255;
    string result=decimal_to_binary(x);
    cout<<result;
    return 0;
}

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// string binary(int a){
//     string binarystring ="";
//     if(a==0) return "0";
//     while(a>0){
//      binarystring=char(a%2+'0')+ binarystring;
//      a=a/2;
//     }
//     return binarystring;
// }
// int main(){
//     int a=255;
//     cout<<binary(a);
// return 0;
// }