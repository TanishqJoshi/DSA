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

};
class Bulldog: public Dog{

};
int main(){
    Bulldog d;
    d.speak();
    return 0;
}