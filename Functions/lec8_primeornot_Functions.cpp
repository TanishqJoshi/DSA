#include<iostream>
using namespace std;
// 1 -> not a prime
// 0 -> is prime
bool isPrime(int n){
    for(int i =2;i<=n;i++){
        if(n%i==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){
    int n;
    cin>>n;
    cout<< isPrime(n);
    return 0;
}