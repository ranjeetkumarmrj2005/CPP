#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
   int x=INT_MAX;
   int y=2^30;
   int l=x+y;
   int t=(x%4+y%4)%4;
   cout<<t;
   return 0;
}
