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
class Dog: public Animal{
    public:
};
class Cat: public Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
int main(){
    Dog d;
    Cat c;
    c.speak();
    d.speak();
    return 0;
}