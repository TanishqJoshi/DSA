#include<iostream>
using namespace std;
int firstocc(int arr[], int size, int key){
    int start =0;
    int end = size-1;
    int ans = -1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start =mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int lastocc(int arr[], int size, int key){
    int start =0;
    int end = size-1;
    int ans = -1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start =mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[7]={1,2,3,3,3,4,5};
    int a = firstocc(arr,7,3);
    int b = lastocc(arr,7,3);
    int count = b-a+1;   //Important
    cout<<count;
    return 0;
}