#include<iostream>
using namespace std;
int duplicate(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];      //only 3 will become zero and ans will be {1,2,4,5}
    }
    for(int i=1; i<size; i++){
        ans=ans^i;           // answer will be xor and only the missing number wil be there
    }
    return ans;
}
int main(){
    int arr[6] = {1,2,3,3,4,5};
    duplicate(arr,6);
    return 0;
}