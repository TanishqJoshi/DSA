#include<iostream>
using namespace std;

int power(int a, int b){
    if(b==0)
    return 1;
    int chotti = power(a,b-1);
    int badi = a*chotti;
    return badi;
}

int main(){
    int a,b;
    //cin>>a>>b;
    a=2;
    b=3;
    int ans = power(a,b);
    return 0;
}