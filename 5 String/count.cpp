#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int unique(string &str){
    int n=str.size()-1;
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(i==0&&str[i]!=str[i+1]) count++;
        else if(i==n&&str[i]!=str[i-1]) count++;
        else if ((i>0&&i<n)&&str[i]!=str[i+1]&&str[i]!=str[i-1]) count++;
        i++;
    }
    return count;
}
int main(){
string str;
cout<<"Enter str : ";
getline(cin,str);
int n=str.size();
int x=unique(str);
cout<<x;
}