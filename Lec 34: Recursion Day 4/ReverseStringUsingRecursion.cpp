#include<iostream>
using namespace std;

void reverse(string &s, int i, int j){
    //base case
    if(i>j)
    return ;
    swap(s[i], s[j]);
    i++;
    j--;
    reverse(s,i,j);
}
int main(){
    string s = "abcde";
    int size = 5;
    reverse(s,0,s.length()-1);
    cout<<s;
    return 0;
}