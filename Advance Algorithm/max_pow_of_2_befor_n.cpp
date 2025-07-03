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
int max_pow_of_2_befor_n2(int n){
   n=n|(n>>1);
   n=n|(n>>2);
   n=n|(n>>4);
   n=n|(n>>8);
   n=n|(n>>16);
   n=(n+1)>>1;
   return n;
}

int main(){
   cout<<max_pow_of_2_befor_n1(100);
   cout<<endl;
   cout<<max_pow_of_2_befor_n2(100);
   return 0;
}


