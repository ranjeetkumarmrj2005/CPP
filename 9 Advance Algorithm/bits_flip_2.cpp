#include<iostream>
#include<vector>
using namespace std;
int max_pow_of_2_befor_n1(int n){
    int temp;
    while(n>0){
        temp=n;
        n=n&(n-1);
    }
    return temp;
}
int bits_flip(int n){
    int temp=n;
   n=n|(n>>1);
   n=n|(n>>2);
   n=n|(n>>4);
   n=n|(n>>8);
   n=n|(n>>16);
   n=n^temp;
   return n;
}

int main(){
    int num=256;
    int x=max_pow_of_2_befor_n1(num);
    x=x<<1;
    x=x-1;
    x=x^num;
    cout<<x;
   return 0;
}
