#include <iostream>
using namespace std;
void update(int arr[], int size)
{
    cout << "Inside the Function.\n";
    // Updating the value of First element in Array
    arr[0] = 120;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Going out of the Function.\n";
}
int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}