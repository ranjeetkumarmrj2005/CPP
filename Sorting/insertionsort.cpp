#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
vector<int>v={7,1 ,2 ,3, 6, 5, 4};
int n=v.size();
for(int i=1;i<n;i++){
    int j=i;
    while(j>=1){
        if(v[j]>v[j-1]) break;
        if(v[j]<v[j-1]) {
        swap(v[j],v[j-1]);
        j--;
    } 
}
}
for(int i=0;i<n;i++){
    cout<<v[i]<<" "; 
}
}