#include<iostream>
using namespace std;

class Student{ // a class is blueprint 
              //to create multiple objects , collection of object
public:
    string name;
    int rno;
    float gpa;
    int age;
};
int main(){
    Student s2;//student is class name which is user defined
               // data type that groups related variable (also called 
               //data members)and function(also called member funtions) 
              //and s2 is an object
    s2.name="ranjeet verma";
    cin>>s2.rno;
    s2.age=20;
    s2.gpa=7.9;

    Student s3; // s3 is an object
    s3.name="Abinav Tiwari";
    s3.rno=03;
    s3.age=20;
    s3.gpa=7.35;
    
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<" "<<s2.age;
    cout<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<" "<<s3.age;

    return 0;
}