#include <iostream>
using namespace std;
class Player{

private:

    int health;
    int score;
    int age;
    bool alive;

public:

    void setHealth(int health){
        this->health=health;
    }
    void setScore(int score){
        this->score=score;
    }
    void setAge(int age){
        this->age=age;
    }
    void setAlive(bool alive){
        this->alive=alive;
    }

    int gethealth (){
        return health;
    }
    int  getScore (){
        return score;
    }
    int getAge (){
        return age;
    }
    int getAlive (){
        return alive;
    }

    int addscore(Player Abhinav ,Player Dalip){
        return Abhinav.getScore() + Dalip.getScore();
    }
    Player XYZ(Player Abhinav, Player Dalip){
        if(Abhinav.getScore() > Dalip.getScore()){
            return Abhinav;
        }else{
            return Dalip;
        }
    }
    
};
int main(){
    Player Abhinav,Dalip;

    Abhinav.setHealth(100);
    Abhinav.setScore(200);  
    Abhinav.setAge(25);
    Abhinav.setAlive(true);

    Dalip.setHealth(80);
    Dalip.setScore(150);    
    Dalip.setAge(30);
    Dalip.setAlive(false);
 
    cout<<Abhinav.addscore(Abhinav, Dalip)<<endl;
    Player temp;
    Player Anany=temp.XYZ(Abhinav, Dalip);
    cout<<Anany.getScore()<<endl;

    Player* ptr=new Player();
    Player amit=*ptr;
    amit.setAge(20);
    cout<<amit.getAge()<<endl;
    ptr->setHealth(90);
    cout<<ptr->gethealth()<<endl;


    
    return 0;
}