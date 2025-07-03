#include <iostream>
#include <vector>
using namespace std;
int c=0;
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
int Inversion(vector<int>&a,vector<int>&b){
    int i=0;
    int j=0;
    int count=0;
 while(i<a.size()&&j<b.size()){
    if(a[i]>b[j]) {
        count=count+(a.size()-i);
        j++;
    }
    else i++;
 }
 return count;
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
    c=Inversion(a,b);
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main() {
    vector<int>v={1,3,5,7,9,2,4,6,8};
    mergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<c;
    return 0;
}
