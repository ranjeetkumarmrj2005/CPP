#include<iostream>
#include<string>
using namespace std;
void removechar(string ans,string original){
if(original.size()==0){
    cout<<ans;
    return ;
}
char ch=original[0];
if(ch=='h') removechar(ans,original.substr(1));
else removechar(ans+ch,original.substr(1));
}
int main(){
string str="physics wallah";
removechar("",str);
return 0;
}