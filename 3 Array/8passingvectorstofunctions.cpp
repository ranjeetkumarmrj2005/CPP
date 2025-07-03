#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change( vector<int>u ){// but if &u then same 
u[0]=5;                      //address pass hoga
for(int i=0;i<u.size();i++){
    cout<<u[i]<<" ";
   }
}
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(8);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   sort(v.begin(),v.end());
   cout<<endl;
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
   change(v);
   cout<<endl;
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   
    return 0;
} 