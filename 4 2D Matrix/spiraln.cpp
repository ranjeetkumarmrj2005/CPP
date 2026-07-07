#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<vector<int>>matrix={
    //  {1,2,3,5,9},
    //  {4,5,6,2,4},
    //  {7,8,9,7,1},
    //  {5,4,3,2,0},
    //  {7,8,9,7,1},
    // };
    int n;
    cout<<"Enter n :";
    cin>>n;
    int x=1;
     vector<vector<int>>matrix(n,vector<int>(n));
    int maxr=matrix.size()-1;
    int maxc=matrix[0].size()-1;
    int minr=0,minc=0;
    
    while(minr<=maxr&&minc<=maxc){
    for(int j=minc;j<=maxc;j++){
        matrix[minr][j]=x;
        x++;
    }
    minr++;
    if(minr>maxr||minc>maxc) break;
    for(int i=minr;i<=maxr;i++){
      matrix[i][maxc]=x;
      x++;
    }
    maxc--;
    if(minr>maxr||minc>maxc) break;
    for(int j=maxc;j>=minc;j--){
      matrix[maxr][j]=x;
      x++;
    }
    maxr--;
    if(minr>maxr||minc>maxc) break;
    for(int i=maxr;i>=minr;i--){
      matrix[i][minc]=x;
      x++;
    }
    minc++;
    if(minr>maxr||minc>maxc) break;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
 }