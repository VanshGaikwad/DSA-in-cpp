#include <iostream>
#include <string>
// #include "Hero.cpp"
using namespace std;

// implicit creation of class
class Hero{
    private: 
    string privacy ="im private variable but call using  constructor" ; //this variable only used in this class only
    public:
    int health;
    char level;
    
    void displayPrivacy(){
        cout<<privacy<<endl;
    }
    Hero(){
     displayPrivacy();
    }
    Hero(int health){
        this->health =health;

    }
    // Getter
    string getPrivateElement (){
        return privacy;
    }
    // Setter
    void setPrivateElement( string newPrivacy){
        privacy = newPrivacy;
    }
   
    
    
};


int main() {
    //Creation of Object //static allocation
    Hero ramesh;

    cout<<"--------dynamic allocation of object"<<endl;
    // dynamic allocation
    Hero *b = new Hero(60);
    // cout<<"health is :"<<(*b).health<<endl;
    // cout<<"level is :"<<(*b).level<<endl;
    b->level ='B';
    // b->health =90;
    cout<<"health is :"<<b->health<<endl;
    cout<<"level is :"<<b->level<<endl;
    cout<<"-------------------------------------"<<endl;



    ramesh.health = 100;
    ramesh.level = 'A';

    cout<<"health is : "<< ramesh.health<<endl;
    cout<<"level is:"<<ramesh.level<<endl;

    cout<<"privacy is  :"<<ramesh.getPrivateElement()<<endl;
    ramesh.setPrivateElement("i am private variable but call using setter and getter");
    cout<<"privacy is :"<<ramesh.getPrivateElement()<<endl;
    

    cout<<"size: "<<sizeof(ramesh)<<endl;
    
    return 0;
}