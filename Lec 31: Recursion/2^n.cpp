#include<iostream>
using namespace std;

int power(int n)
{
    if(n==0)
    return 1;
    int chotti = power(n-1);
    int badi = 2*chotti;
    return badi;
}

int main(){
    int n;
    cin>>n;
    int ans = power(n);
    cout<<ans<<endl;
    return 0;
}