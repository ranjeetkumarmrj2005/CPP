#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void minimum(vector<int>v,int mn,int idx){
    if( idx==v.size()){
        cout<<mn;
        return;
    }
    mn=min(mn,v[idx]);
    minimum(v,mn,idx+1);
}
int main(){
vector<int>v={9,2,3,4,5,6,7,8,-11};
minimum(v,INT_MAX,0);
return 0;
}