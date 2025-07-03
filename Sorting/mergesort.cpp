#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>u,vector<int>v,vector<int>&res){
    int i=0;
    int j=0;
    int k=0;
    while(i<u.size()&&j<v.size()){
    if(u[i]<v[j]){
        res[k]=u[i];
        i++;
        k++;
    }
    else{
        res[k]=v[j];
        j++;
        k++;
    }
    }
    if(i==u.size()){
        while(j<v.size()){
        res[k]=v[j];
            k++;
            j++;
        }
    }
    if(j==v.size()){
        while(i<u.size()){
            res[k]=u[i];
            k++;
            i++;
        }
    }
    }
int main() {
    vector<int>u={1,3,5,7,9};
    vector<int>v={2,4,6,8};
    vector<int>res(v.size()+u.size());
    merge(u,v,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
