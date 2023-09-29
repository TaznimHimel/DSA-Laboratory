#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array
    cout << "Original Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Using the pointer to manipulate array elements
    *ptr = 10; // Modify the first element
    ptr++;     // Move the pointer to the next element
    *ptr = 20; // Modify the second element
    cout << "Modified Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
