#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
if(sr>er||sc>ec) return 0;
if(sr==er && sc==ec) return 1;
int rightways=maze(sr,sc+1,er,ec);
int downways=maze(sr+1,sc,er,ec);
return downways+rightways;
}  
int main(){
   int ways=maze(1,1,3,3);
   cout<<ways;
   return 0;
}