#include<iostream>
using namespace std;
int factorial( int x){
    int fact=1;
    for(int j=1;j<=x;j++){
        fact=fact*j;
        }
    return fact ;
}
int combination( int i,int j){
    int ncr=factorial(i)/(factorial(j)*factorial(i-j));
    return ncr;
}
int permutation(int i,int j){
    int npr=factorial(i)/(factorial(i-j));
    return npr;
}

int main(){
    int i,j;
    cout<<"Enter i :";
    cin>>i;
    cout<<"Enter j :";
    cin>>j;
   int ncr=combination(i,j);
   int npr=permutation(i,j);
   cout<<ncr<<endl<<npr;
    return 0;
}