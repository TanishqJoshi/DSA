#include<iostream>
using namespace std;
//Print your name 5 times
/*void solve(string &name,int count)
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
} */

//Print lineraly till n
/*void print(int n, int i){
    if(i>n) return ;
    cout<<i<<endl;
    print(n,i+1);
}
int main(){
    int n;
    cin>>n;
    int i;
    print(n,i);
    return 0;
}
*/



//print N to 1
/* 
    void print(int n){
    if(n==0) return ;
    cout<<n<<endl;
    print(n-1);
}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}
*/



//print 1 to N linearly (By Backtracking)
/*void solve(int n, int i){
    if(i<1) return ;
    solve(n,i-1);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    solve(n,n);
    return 0;
}
*/
//print N to 1

void solve(int n, int i){
    if(i<1) return ;
    cout<<i<<endl;
    solve(n,i-1);
}
int main(){
    int n;
    cin>>n;
    solve(n,n);
    return 0;
}