#include <iostream>
using namespace std;

int searchElement(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found in the array
}
int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter the element to search for: ";
    cin >> target;
    int index = searchElement(arr, size, target);
    if (index != -1)
    {
        cout << "Element " << target << " found at index " << index << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the array." << endl;
    }
    return 0;
}