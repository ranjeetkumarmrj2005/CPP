#include<iostream>
#include<vector>
using namespace std;
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
   cout<<bits_flip(256);
   return 0;
}
