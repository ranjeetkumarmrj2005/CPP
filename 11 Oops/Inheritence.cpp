#include <iostream>
using namespace std;
class Player {
private:
    int height;
    int age;
protected:
    string domain;
    int runspeed;
public:
    int practicetime;

    Player(){
        cout<<"player constructor called"<<endl;
    }
    };
    class Cricketer:Player{
        public:
        int wicket;
        int runs;

        Cricketer(){
            cout<<"Cricketer constructor called"<<endl;
        }
    };
int main(){
    Cricketer Virat;
    Virat.height = 175;
    cout<<Virat.height<<endl;
    return 0;
}