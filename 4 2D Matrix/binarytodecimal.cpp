#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
vector<int> v1={1,1,1,0,0,1,0,0,1,0};
int sum=0;
for(int i=0;i<v1.size();i++){
    sum=sum+pow(2,i)*v1[i];
}
cout<<sum;
}