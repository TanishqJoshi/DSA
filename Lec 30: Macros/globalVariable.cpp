#include<iostream>
using namespace std;
int score =15;   //Bad Pratice don't use global variables

void a(int &score){
    score = score +1;
    cout<<"In A- "<<score<<endl;
    score = score +1;
}

void b(int &score){
    cout<<"In B- "<<score<<endl;
}


int main(){
    cout<<"Main- "<<score<<endl;
    a(score);
    b(score);
    return 0;
}