#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,-2,3,-4,-5,6,-7,8};
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[j]>0) j--;
        else if (v[i]<0) i++;
        else {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
 return 0;
}