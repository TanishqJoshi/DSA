#include<iostream>
using namespace std;
bool isEven(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int a;
    cin>>a;
    cout<<isEven(a);
    return 0;
}

//0 -> Odd
//1 -> Even