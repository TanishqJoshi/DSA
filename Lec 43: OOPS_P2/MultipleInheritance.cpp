#include<iostream>
using namespace std;

class Animal{
    int age;
    int health;
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Mammal{
    int level;
    int type;
    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};
//Multiple Inheretance
class Dog: public Animal, public Mammal{

};
int main(){
    Dog d;
    d.speak();
    d.bark();
    return 0;
}