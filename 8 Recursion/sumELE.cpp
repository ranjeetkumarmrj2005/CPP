#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void minimum(vector<int>v,int sum,int idx){
    if( idx==v.size()){
        cout<<sum;
        return;
    }
    sum=sum+v[idx];
    minimum(v,sum,idx+1);
}
int main(){
vector<int>v={9,2,3,4,5,6,7,8,-11};
minimum(v,0,0);
return 0;
}