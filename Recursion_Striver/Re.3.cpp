#include<iostream>
using namespace std;
// Sum of N natural nums
int sum(int n){
    if(n==0) return 0;
    int partial = sum(n-1);
    return partial+n;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}