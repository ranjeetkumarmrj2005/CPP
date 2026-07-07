#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int>v={1,3,5,7,9,2,4,6,8 };
    int count=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]>v[j] ) count++;
        }
    }
    cout<<count;
    return 0;
}
