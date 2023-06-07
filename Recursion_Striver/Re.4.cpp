//Reverse an array 2 pointers approach using recursion
/*#include<iostream>
using namespace std;
void f(int arr[], int s, int e){
    if(s>=e) return ;
    swap(arr[s],arr[e]);
    f(arr,s+1,e-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int s=0;
    int e = n-1;
    f(arr,s,e);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/



//Check is Palindrome

#include<iostream>
using namespace std;

bool f(int arr[], int s, int e){
    if(arr[s]!=arr[e]) return false;
    if(s>=e) return true;
    f(arr, s+1, e-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int s=0;
    int e =n-1;
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int ans = f(arr,s,e);
    if(ans==1)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"not";
    }
    return 0;
}