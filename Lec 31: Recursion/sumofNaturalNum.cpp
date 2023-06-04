#include<iostream>
using namespace std;

int sum(int n){
    if(n==1)
    return 1;
    int partialSum = sum(n-1);
    int ans = n+partialSum;
    return ans;
}
int main(){
    int n;
    cin>>n;
    int ans = sum(n);
    cout<<ans;
    return 0;
}