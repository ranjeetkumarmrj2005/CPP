
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str;
getline(cin,str);
int n=str.size();
// for(int i=0;i<n;i++){
//     cin>>str[i];
// }
cout<<endl;
reverse(str.begin(),str.begin()+n/2);
cout<<str;
// for(int i=0;i<n;i++){
//     cout<<str[i]<<" ";
// }
}