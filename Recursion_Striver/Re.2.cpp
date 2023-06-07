#include<iostream>
using namespace std;

void solve(string &name,int count)
{
    if(count==6) return ;
    cout<<name<<" "<<count<<endl;
    solve(name,count+1);
}
int main(){
    string name;
    cin>>name;
    int count = 1;
    solve(name,count);
    return 0;
}