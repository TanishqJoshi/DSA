#include<iostream>
using namespace std;

int power(int a, int b){
    int ans;
    for(int i=0; i<b; i++){
        ans = ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cin>> a >>b;
    cout<<power(a,b);
    return 0;
}