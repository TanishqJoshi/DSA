#include<iostream>
using namespace std;

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int maxSum=0;
    int minSum = INT_MAX;
    int sum=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            sum = sum+arr[i][j];
        }
        cout<<"Sum of row is "<<sum<<endl;
        if(sum>=maxSum)
        {
            maxSum = sum;
        }
        if(sum<minSum)
        {
            minSum = sum;
        }
        sum=0;
    }
    cout<<maxSum<<endl;
    cout<<minSum<<endl;
    return 0;
}