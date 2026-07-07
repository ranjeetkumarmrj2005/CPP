#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int count_set_bit_(int n){
    int count=0;
    while(n>0){
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
   cout<<count_set_bit_(255);
    return 0;
}






