#include<iostream>
#include<vector>
using namespace std;
void printF(int nums[], vector<int> &output, int index){
    if(index==3)
    {
        for(int i=0; i<3; i++)
        {
            cout<<output[i];
        }
    }

    //exclude
    printF(nums, output, index+1);

    //include
    output.push_back(nums[index]);
    printF(nums, output, index+1);
}
int main(){
    int nums[3] = {1,2,3};
    int index =0;
    vector<int> output;
    printF(nums, output, 0);
    return 0;
}