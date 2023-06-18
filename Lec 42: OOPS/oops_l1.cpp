#include<iostream>
using namespace std;

class Hero{
    //properties
    int health;
    float age;
    double num;
    bool gap;
    long int agw2;
    long long int age3;
};
int main(){  
    //creating object h1 of type Hero
    Hero h1;
    cout<<"Size of h1 is: "<<sizeof(h1)<<endl;
    return 0;
}