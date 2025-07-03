
#include<stdio.h>
int main(){
    int n;
    printf("Enter number : " );
    scanf("%d",&n); 
    int nst= n;
    int nsp=1;
    int a=0;
    for(int i=1;i<=2*n+1;i++){
     if(i<=n+1) {
        a++;
        printf("%d",a);
     }
     else{
        a--;
        printf("%d",a);
     }
    }
    printf("\n");
    for(int i=1;i<=n;i++){
       for(int j=1;j<=nst;j++){
        printf("%d",j);
       }
       for(int k=1;k<=nsp;k++){
        printf(" ");
       }
       for(int j=1;j<=nst;j++){
        printf("%d",j);
       }
       printf("\n");
      nsp+=2;
      nst--;
    }
return 0;
}