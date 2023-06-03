#include<iostream>
using namespace std;

int sumArray(int arr[], int size){
    //int sum =0;
    if(size==0){
        return 0;
    }
    else{
        int sum = sumArray(arr+1, size-1)+arr[0];
        return sum;
    }
    
}
int main(){
    int arr[5] = {3,5,5,1,10};
    int size = 5;
    int sum = sumArray(arr,size);
    cout<<sum<<endl;
    return 0;
}