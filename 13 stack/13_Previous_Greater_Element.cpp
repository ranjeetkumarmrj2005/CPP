#include <iostream>
#include<stack>
using namespace std;

int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(int);
    int PGE[n];
    stack<int>st;
    st.push(arr[0]);
    PGE[0]=-1;
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) PGE[i]=-1;
        else PGE[i]=st.top();
        
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<PGE[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// code for the PSI;

// int largestRectangleArea(vector<int>& heights) {
//     int n=heights.size();
//     vector<int>nsi(n);
//     stack<int>st;
//     nsi[n-1]=n;
//     st.push(n-1);
//     for(int i=n-2;i>=0;i--){
//         while(st.size()>0 && heights[st.top()]>=heights[i]) st.pop();
//         if(st.size()==0) nsi[i]=n;
//         else nsi[i]=st.top();
//         st.push(i);
//     }
//     vector<int>psi(n);
//     stack<int>gt;
//     psi[0]=-1;
//     gt.push(0);
//     for(int i=1;i<n;i++){
//         while(gt.size()>0 && heights[gt.top()]>=heights[i]) gt.pop();
//         if(gt.size()==0) psi[i]=-1;
//         else psi[i]=gt.top();
//         gt.push(i); 
//     }