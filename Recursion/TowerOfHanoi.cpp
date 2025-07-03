#include<iostream>
using namespace std;
void Hanoi(int n,char S,char H,char D){
    if(n==0) return;
    Hanoi(n-1,S,D,H);
    cout<<S<<"->"<<D<<endl;
    Hanoi(n-1,S,H,D);
}
int main(){
    int n=3;
    Hanoi(n,'A','B','C');
   return 0;
}