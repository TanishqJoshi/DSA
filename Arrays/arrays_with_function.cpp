#include<iostream>
using namespace std;

int printArray(int arr[], int size){
    cout<<"Starting";
    for(int i =0; i<size; i++){
        cout<<arr[i];
    }
    cout<<"done";
}
int main(){
    int third[15]={2,7};
    printArray(third,15);
    return 0;
}