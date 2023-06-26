#include<iostream>
using namespace std;

class student{
    private:    
        string name;
        int age;
        int marks;
    
    public:
        int getAge(){
            return this -> age;
        }
};
int main(){
    student first;
    cout<<"All Good!"<<endl;
    return 0;
}               