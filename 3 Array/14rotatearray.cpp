#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<int>&v,int x,int y){
    for(int i=x,j=y;i<j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    cout<<endl;
}
int main(){
    int k;
    cout<<"Enter number :";
    cin>>k;
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    int n=v1.size();
    for(int k=0;k<n;k++){
        cout<<v1[k]<<" ";
       }
     rotate(v1,0,n-1);
    rotate(v1,0,k-1);
    rotate(v1,k,n-1);
    for(int k=0;k<n;k++){
        cout<<v1[k]<<" ";
       }
    return 0;
}