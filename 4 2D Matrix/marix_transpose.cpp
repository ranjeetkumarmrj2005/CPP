#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>matrix={
     {1,2,3,5,9},
     {4,5,6,2,4},
     {7,8,9,7,1},
     {5,4,3,2,0},
     {7,8,9,7,1},
    };
    int maxr=matrix.size()-1;
    int maxc=matrix[0].size()-1;
    int minr=0,minc=0;
    
    while(minr<=maxr&&minc<=maxc){
    for(int j=minc;j<=maxc;j++){
      cout<<matrix[minr][j]<<" ";
    }
    minr++;
    if(minr>maxr||minc>maxc) break;
    for(int i=minr;i<=maxr;i++){
      cout<<matrix[i][maxc]<<" ";
    }
    maxc--;
    if(minr>maxr||minc>maxc) break;
    for(int j=maxc;j>=minc;j--){
      cout<<matrix[maxr][j]<<" ";
    }
    maxr--;
    if(minr>maxr||minc>maxc) break;
    for(int i=maxr;i>=minr;i--){
      cout<<matrix[i][minc]<<" ";
    }
    minc++;
    if(minr>maxr||minc>maxc) break;
    }

return 0;
 }