#include<iostream>
using namespace std;
//852. Peak Index in a Mountain Array (LeetCode)
int target(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
        while(start<=end){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
                //cout<<mid;
            }
            else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
                start = mid;
                //cout<<mid;
            }
            else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
            end = mid-1;
            //cout<<mid;
            }
            mid = start + (end-start)/2;
        }
        return mid;
}
int main(){
    int arr[7] = {0,1,2,10,5,3,2};
    cout<<target(arr,7);
    return 0;
}