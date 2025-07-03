#include<iostream>
using namespace std;
void reverse( int* a /* int a[] */ , int n ){
    for( int i=0,j=n-1;i<j;i++,j--){
    int temp=a[i];
    a[i]=a[j]; 
    a[j]=temp;
    }
}
int main(){
    int arr[]={1,1,1,1,1,1,1,2};
    int* ptr=arr;
    ptr[1]=5;
    *ptr=8;
    cout<<ptr<<endl<<&arr<<endl<<&arr[0]<<endl;
    cout<<ptr[1 ]<<endl;
   for(int i=0;i<(sizeof(arr)/4);i++){
    cout<<ptr[i];
   }
   cout<<endl;
   reverse(arr,(sizeof(arr)/4));
   for(int i=0;i<(sizeof(arr)/4);i++){
    cout<<ptr[i];
   }
   cout<<endl;
   *ptr=3;
   ptr++;
   *ptr=4;
   ptr--;
   for(int i=0;i<(sizeof(arr)/4);i++){
    cout<<*ptr;
    ptr++;
   }
    return 0;
}