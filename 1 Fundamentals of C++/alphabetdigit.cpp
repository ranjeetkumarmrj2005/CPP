#include<iostream>
using namespace std ;
int main(){
    char ch;
    cout<<"Enter charecter : ";cin>>ch;
    if(ch>='a'&& ch<='z'|| ch>='A'&& ch<='Z'){
        cout<<" Charecte is alphabet";
    }
    else if(ch>='0'&& ch<='9'){
        cout<<"Charecte is digit";
    }
    else{
        cout<<"Charecter is special charecter";
    }
    return 0;
}