#include <iostream>
using namespace std;
#include <vector>
int main() {
vector<int>v={8,3,5,7,9,2,4,6,1};
int n=v.size();
int i=0;
while(i<n){
if(v[i]!=i+1) swap(v[i],v[v[i]-1]);
else i++;
}
for(int num:v){
    cout<<num<<" ";
}
return 0;
}
