#include<iostream>
using namespace std;
int unique(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];    // 7^7=0, any number when xor with itself ans is 0
        }                    // 7^0=7, any number when xor with 0 ans is number itself
        return ans;
}

int main(){
    int arr[5]={1,1,2,2,3};
    unique(arr,5);
    return 0;
}