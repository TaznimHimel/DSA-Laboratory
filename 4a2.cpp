#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index, newValue;
    cout << "Enter the index to update: ";
    cin >> index;
    if (index < 0 || index >= size)
    {
        cout << "Invalid index." << endl;
        return 1; // Exit with an error code
    }
    cout << "Enter the new value: ";
    cin >> newValue;
    arr[index] = newValue;
    cout << "Array after updating:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
