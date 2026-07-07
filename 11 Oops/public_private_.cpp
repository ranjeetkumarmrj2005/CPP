#include<iostream>
using namespace std;

class Student{ 
private:
    string name;
    int rno;
    float gpa;
    int age;
public:
    void assignname(string s){
        name=s;
    }
    void allotedrno(int n){
        rno=n;
    }
    string displayname(){
        return name;
    }
    int displayron(){
        return rno;
    }
};
int main(){
    Student Abhinav;
    Abhinav.assignname("Abhinav Tiwari");
    Abhinav.allotedrno(03);
    cout<<Abhinav.displayname();
    cout<<endl;
    cout<<Abhinav.displayron();
    return 0;
}