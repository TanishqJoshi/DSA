#include<iostream>
using namespace std;

class Hero{
    //properties
    public:
    int health;
    char level;
};
int main(){  
    //creating object h1 of type Hero
    Hero ramesh;
    ramesh.health = 70;
    ramesh.level = 'A';
    cout<<"Health is: "<<ramesh.health<<endl;
    cout<<"Health is: "<<ramesh.level<<endl;
    return 0;
}