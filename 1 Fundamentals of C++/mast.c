
#include<stdio.h>
int main(){
    int n;
    printf("Enter number : " );
    scanf("%d",&n); 
    int nst= n;
    int nsp=0; 
    for(int i=1;i<=2*n;i++){
       for(int j=1;j<=nst;j++){
        printf(" *");
       }
       for(int k=1;k<=nsp;k++){
      printf("  ");
       }
       for(int l=1;l<=nst;l++){
        printf(" *");
       }
       printf("\n");
       if(i<n){
       nst--;
       nsp+=2;
       }
       else if (i>n){
        nst++;
        nsp-=2;
       }
    }
return 0;
}