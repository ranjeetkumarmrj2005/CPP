#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float gpa;
    int age;

    Student(){ //default constructor
       
    }
    Student(string s,int r,float g,int a){//parameterized constructor
        name =s;
        rno=r;
        gpa=g;
        age=a;
    }
    Student(int r,float g,string s,int a){
        name =s;
        rno=r;
        gpa=g;
        age=a;
    }
};

int main(){
    Student s1("ranjeet verma",44, 7.9,20); //Student s1={"ranjeet verma",44, 7.9,20};
    Student s2;
    s2.name = "Abinav Tiwari";
    s2.rno = 3;
    s2.gpa = 7.35;
    s2.age = 20;

    Student s3(03, 7.35, "Abinav Tiwari", 20); //using different order of parameters
    Student s4 = s1; //deep copy
    s4.name="Abishek Verma";
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<" "<<s1.age<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<" "<<s2.age<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<" "<<s3.age<<endl;
    cout<<s4.name<<" "<<s4.rno<<" "<<s4.gpa<<" "<<s4.age<<endl;

    return 0;
}