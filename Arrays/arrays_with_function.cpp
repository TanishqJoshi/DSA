#include<iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout<<"Printing the array"<<endl;
    for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";  
        }
}
int main()
{
    int first[4] = {11,12,13,14};
    printArray(first, 4);
    return 0;

}

