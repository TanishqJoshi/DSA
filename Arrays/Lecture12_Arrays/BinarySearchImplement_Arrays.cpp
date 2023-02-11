#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start =0;
    int end = size-1;

    //int mid = (start+end)/2;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start =mid+1;
        }
        else{
            end = mid-1;
        }
        //mid = (start+end)/2;
        mid = start+(end-start)/2;
    }
    return -1;
}
int main(){
    int even[6]={2,6,8,10,15,20};
    int odd[5]={1,5,9,12,15};
    int evenIndex = binarySearch(even,6,20);
    int oddIndex = binarySearch(odd,5,15);
    cout<<evenIndex<<endl;
    cout<<oddIndex<<endl;
    return 0;
}