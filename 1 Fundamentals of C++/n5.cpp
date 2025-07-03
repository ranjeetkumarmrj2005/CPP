
#include<iostream>
using namespace std;
int main(){
    int n;
    printf("Enter number : " );
    scanf("%d",&n);
    int i;
    int j;
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=5;j++){
            if(i==j){
                printf("*");
            }
            
            }
            if(i+j==10){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            cout<<endl;
    }
return 0;
}