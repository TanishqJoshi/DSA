#include<iostream>
using namespace std;

// int getMax(int arr[], int n){
//     int max = INT_MIN;
//     for(int i=0; i<n; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     return max;
// }
int getMax(int arr[], int n){
    int bigger = INT_MIN;
    for(int i=0; i<n; i++){
        
        bigger = max(bigger, arr[i]);  //in built formula to find maximum(Important)
        // if(arr[i]>max){
        //     max = arr[i];
        // }
    }
    return bigger;
}

int getMin(int arr[], int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    int num[100];   //Taking input in Array
    for(int i=0; i<size; i++){
        cin>>num[i]; 
    }
    cout<<"Maximum is "<<getMax(num, size)<<endl;
    cout<<"Minimum is "<<getMin(num, size)<<endl;
    return 0;
}