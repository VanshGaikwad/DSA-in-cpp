#include <iostream>
using namespace std;

class Animal {
    public:
    void show (){
        cout<<"I am an animal"<<endl;
    }
};

class Dog : public Animal {
    public:
    void show (){
        cout<<"I am a dog"<<endl;
    }
};
class GoldenRetriever : public Dog {
    public:
    void show (){
        cout<<"I am a Golden Retriever"<<endl;
    }
};


class A {
    public:
    void show (){
        cout<<"I am class A"<<endl;
    }
};

class B  {
    public:
    void show (){
        cout<<"I am class B"<<endl;
    }
};
class C {
    public:
    void show(){
        cout<<"I am class C"<<endl;
    }

};


class D : public A, public B, public C {
    

};

int main() {

    // Dog d;
    // Animal a;
    // GoldenRetriever gr;
    // gr.show();
    // d.show();
    // a.show();

    D objd;
    // objd.B::show();
    // objd.show();// error: request for member 'show' is ambiguous
    objd.A::show();
    objd.B::show();
    objd.C::show();
    
    return 0;
}