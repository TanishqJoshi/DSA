#include<iostream>
using namespace std;

int main(){
    int i=5;
    int &j = i;
    cout<<++j<<endl;
    cout<<i<<endl;
    cout<<i*j;
    return 0;
}