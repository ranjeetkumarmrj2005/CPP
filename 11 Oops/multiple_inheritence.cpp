#include<iostream>
#include<cmath>
using namespace std;

class Cricketer{ 
    public:
    int wickets;
    float avg;
};
class Engineer{
    public:
    int experience;
    string company;
};
class phodu : public Cricketer,Engineer{// multiple inheritance
    public:
    sring name;
    int age;
};
int main(){
   
    return 0;
} 