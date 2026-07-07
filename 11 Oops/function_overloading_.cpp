#include <iostream>
using namespace std;
class Student {
public:

    int rollno;
    int age;
    int marks;
    Student(int rn,int a){
        cout<<rn<<" "<<a<<endl;
    }
    Student(int rn){ 
        cout<<rn<<endl;
    }
};
int main(){

    Student ranjeet(101, 20);
   
    return 0;
}