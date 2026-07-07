#include <iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(int);
    int NGI[n];
    stack<int>st;
    st.push(n-1);
    NGI[n-1]=n;
    // pop ans push
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0) NGI[i]=n;
        else NGI[i]=st.top();

        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<NGI[i]<<" ";
    }
    cout<<endl;
    return 0;
}
