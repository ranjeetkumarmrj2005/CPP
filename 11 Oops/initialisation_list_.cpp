#include <iostream>
using namespace std;
class Student {
public:

    int rollno;
    int age;
    Student(int rn,int a): rollno(rn),age(a){
    }
    void display(){
        cout<<rollno<<" "<<age<<endl;
    }
    ~Student(){
        cout<<"Destructor called for "<<rollno<<endl;
    }
};
int main(){

    Student ranjeet(101, 20);
    ranjeet.display();
    return 0;
}