#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
int sum=0;
vector<int>v1={47,2,81,34,77,1,60,15,85,49,58,97
    ,13,59,84,44,66,20,38,19,9,11,64,39,26,72,
    71,23,43,31,6,79,37,35,25,90,45,28,78,32,89,62,
    61,40,36,41,93,56,17,5,12,94,16,18,70,91,50,
    65,88,42,27,7,3,73,68,46,83,92,95,10,22,86,21,
    4,8,87,96,53,29,30,67,33,24,74,99,48,55,76,
    52,63,57,14,80,51,75,98,54,82,69,82};
int n=v1.size();
for(int i=0;i<n;i++){
sum=sum+v1[i];
}
int duplicate=  sum-((n*(n-1)/2));
cout<<duplicate;
}