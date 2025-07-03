#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    display(v1);
    for(int i=0,j=v1.size()-1;i<j;i++,j--){
      int temp=v1[i];
      v1[i]=v1[j];
      v1[j]=temp;
    }
    display(v1);
    return 0;

}