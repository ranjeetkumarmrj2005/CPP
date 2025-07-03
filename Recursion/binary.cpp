#include<iostream>
#include<vector>
#include<climits>
using namespace std;
string binary(int a){
    string binarystring ="";
    if(a==0) return "0";
    while(a>0){
     binarystring=char(a%2+'0')+ binarystring;
     a=a/2;
    }
    return binarystring;
}
int main(){
    int a=255;
    cout<<binary(a);
return 0;
}