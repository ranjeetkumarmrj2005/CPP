#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int max(float a,float b){
    if(a>b) return a;
    else return b;
}
int min(float a,float b){
    if(a<b) return a;
    else return b;
}
int main(){
vector<int>v={5,3,10};
int n=v.size();
float kmin=(float)INT_MIN;
float kmax=(float)INT_MAX;
bool flag=true;
for(int i=0;i<n-1;i++){
    if(v[i]>=v[i+1]){
    kmin=max(kmin,(v[i+1]+v[i])/2.0);
    }
    else{
        kmax=min(kmax,(v[i+1]+v[i])/2.0);
    }
    if(kmin>kmax){
        flag=false;
        break;
    }
}
if(flag==false) cout<<-1;
else  cout<<"["<<kmin<<" "<<kmax<<"]";
return 0;
}
