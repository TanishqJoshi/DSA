#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k){
    //base case
    if(s>e)
    return false;
    int mid = s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return binarySearch(arr+1, mid+1, e, k);
    }
    if(arr[mid]>k){
        return binarySearch(arr+1, s, mid-1, k);
    }
}
int main(){
    int arr[6]= {2,4,6,8,14,18};
    int size = 6;
    int k =14;
    bool ans = binarySearch(arr, 0, 5, k);
    if(ans==1){
        cout<<"key present";
    }
    return 0;
}