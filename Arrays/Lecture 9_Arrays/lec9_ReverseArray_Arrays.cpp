#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(end>=start){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[4] = {1,2,3,4};
    reverse(arr,4);
    printArray(arr,4);
    return 0;
}