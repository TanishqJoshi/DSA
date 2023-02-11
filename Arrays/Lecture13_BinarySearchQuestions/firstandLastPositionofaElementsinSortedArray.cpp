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
    int arr[8]={1,2,3,7,7,8,8,8};
    cout<<firstocc(arr,8,7)<<endl;
    cout<<lastocc(arr,8,7)<<endl;
    return 0;
}