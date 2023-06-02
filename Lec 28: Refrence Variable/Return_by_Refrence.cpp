#include<iostream>
using namespace std;
// int& update1(int n){     //Bad Pratice
//     n++;
// }   

void update2(int &n){
    n++;
}

int main(){
    int n=5;
    cout<<"Before "<<n<<endl;
    update2(n);
    cout<<"After "<<n<<endl;
    return 0;
}