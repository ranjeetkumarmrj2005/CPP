// #include<iostream>
// using namespace std;
// void OneToOneinc(int n){
//     if(n==0) return;
//     OneToOneinc(n-1);
//     cout<<n<<" ";
// }  
      
// void OneToOnedec(int n){
// if(n==0) return;
// cout<<n<<" ";
//     OneToOnedec(n-1);
    
// }  
// //Example: If n = 5, the output should be: 1 2 3 4 5 4 3 2 1
// int main(){
//    int n=10;
//    OneToOneinc(n);
//    OneToOnedec(n);
//     return 0;
// }
#include<iostream>
using namespace std;

void inc_seq(int n){
    if (n==0) return ;
    inc_seq(n-1);
    cout << n << " ";
}

void dec_seq(int n){
    if (n==0) return ;
    cout << n << " ";
    dec_seq(n-1);
}

int main(){
    int n;
    cout << "Enter n = ";
    cin >> n;

    inc_seq(n);
    dec_seq(n-1);
}