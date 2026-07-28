#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string ,int>mp;
    pair<string,int>p1;
    p1.first="Ranjeet Verma";
    p1.second=44;

    pair<string,int>p2;
    p2.first="Abhishek Verma";
    p2.second=48;

    pair<string,int>p3;
    p3.first="Surya Verma";
    p3.second=57;
   

    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);

    for(pair<string,int>p:mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<mp.size();
    
    cout<<endl;

    for(auto p:mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<mp.size();

    cout<<endl;

    mp["Harsh"]=47;
    mp["Sohan"]=40;
    mp["Rohan"]=50;

    cout<<mp["Harsh"];
    cout<<endl;

 
    for(auto p:mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<mp.size();
    cout<<endl;

    mp.erase("Ranjeet Verma");
    mp.erase("Abhishek Verma");
    mp.erase("Surya Verma");

    for(auto p:mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<mp.size();

    return 0;
}