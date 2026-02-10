#include <iostream>
using namespace std;

class Human //parent class
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int weight)
    {
        this->weight = weight;
    }
};


class Male : public Human  {//child class
    public:
    string color;
    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }

};

int main()
{
    Male obj1 ;
    cout<<obj1.age<<endl; //accessing parent class data member
    cout<<obj1.color<<endl; //accessing child class data member
    
    obj1.sleep(); //accessing child class member function
    return 0;
}