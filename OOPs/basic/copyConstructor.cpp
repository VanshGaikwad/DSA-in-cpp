#include <iostream>
using namespace std;

class Hero {
    public: //properties of class
    int health;
    char level;
    // default constructor
    Hero (){
        cout<< "default constructor called "<<endl;
    }
    // parameterized constructor
    Hero (int health,char level){
        this->health = health;
        this->level = level;
        cout<<"parameterized constructor called "<<endl;
        cout<<"health is : "<< health <<endl;
        cout<<"level is : "<< level <<endl;
    }
    

};
int main() {
    Hero suresh (70,'A');
    Hero ritesh(suresh); //default constructor called 
    ritesh.health = suresh.health;
    ritesh.level = suresh.level;
    cout<<"health of ritesh is : "<< ritesh.health <<endl;
    cout<<"level of ritesh is : "<< ritesh.level <<endl;
    
    

    
    return 0;
}