#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Starting\n";
    for(int i =0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"done\n";
}
int main(){
    // int size;
    // cin>>size;
    int arr1[5]={2,7,11};
    int arr2[6]={1,1,1};
    printArray(arr1,5);
    printArray(arr2, 6);
    return 0;
}