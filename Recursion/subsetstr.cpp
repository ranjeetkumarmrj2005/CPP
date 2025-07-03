#include<iostream>
#include<string>
using namespace std;
void subsetstr(string ans,string original){
if(original.size()==0){
    cout<<ans<<endl;
    return ;
}
char ch=original[0];
subsetstr(ans+ch,original.substr(1));
subsetstr(ans,original.substr(1));
}
int main(){
string str="abc";
subsetstr("",str);
return 0;
}