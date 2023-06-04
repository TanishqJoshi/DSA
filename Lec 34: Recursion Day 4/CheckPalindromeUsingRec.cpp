#include<iostream>
using namespace std;
bool check(string str, int i, int j){
    if(i>j)
    return true;
    else if(str[i]!=str[j]){
    return false;
    }
    else{
        return check(str,i+1,j-1);
    }
}
int main(){
    string str = "abbccbba";
    bool ans = check(str,0,str.length()-1);
    if(ans)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not";
    }
    return 0;
}