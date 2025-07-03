#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>u,vector<int>v,vector<int>&res){
    int i=0;
    int j=0;
    int k=0;
    while(i<u.size()&&j<v.size()){
    if(u[i]>v[j]){
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
        int a=v.size()-1;
        while(j<v.size()){
        res[k]=v[a];
            k++;
            j++;
            a--;
        }
    }
    if(j==v.size()){
        int b=u.size()-1;
        while(i<u.size()){
            res[k]=u[b];
            k++;
            i++;
            b--;
        }
    }
}
void mergeSort(vector<int>&v){
int n=v.size();
if(n==1) return;
int n1=n/2;
int n2=n-n/2;
vector<int>a(n1);
vector<int>b(n2);
for(int i=0;i<n1;i++) a[i]=v[i];
for(int i=0;i<n2;i++) b[i]=v[i+n1];
    mergeSort(a);
    mergeSort(b);
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main() {
    vector<int>v={1,3,5,7,9,2,4,6,8 };
    mergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
