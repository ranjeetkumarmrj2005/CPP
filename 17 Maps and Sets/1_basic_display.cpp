#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(0);
    s.insert(7);
    s.insert(6);
    s.insert(1);
    s.insert(14);
    s.insert(45);
    s.erase(1); 

    cout<<s.size()<<endl;
    int target=6;

    if(s.find(target)!=s.end()){
        cout<<"exist"<<endl;

    }
    else{
        cout<<"does not exist";
    }



    for(int ele:s){
        cout<<ele<<" ";
    }
    return 0;
}