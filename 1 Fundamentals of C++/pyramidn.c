
#include<stdio.h>
int main(){
    int n;
    printf("Enter number : " );
    scanf("%d",&n);
    int nst= 1;
    int nsp= n-1;
    for(int i = 1;i<=2*n;i++){
        if(i<=n){
        for(int j=1;j<=nsp;j++){
            printf(" ");}
        for(int k=1;k<=nst;k++){
            printf("*");}
        printf("\n");
        nsp--;
        nst+=2;}
    else{
            nst-=2;
            nsp++;
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
            printf("\n");   
        }
    }
return 0;
}