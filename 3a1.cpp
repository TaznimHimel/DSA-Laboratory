#include <iostream>
using namespace std;
int main()
{
    int a[20];
    int n;
    cout << "Enter your Array size (up to 20): ";
    cin >> n;
    if (n < 1 || n > 20)
    {
        cout << "Array size should be between 1 and 20." << endl;
        return 1; // Exit with an error code
    }
    cout << "Enter your Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\nArray elements before Insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "   ";
    }
    cout << endl << endl;
    int value, position;
    cout << "Enter the value to insert: ";
    cin >> value;
    cout << "Enter the position to insert (0-based index): ";
    cin >> position;
    if (position < 0 || position > n)
    {
        cout << "Invalid position. Position should be between 0 and " << n << "." << endl;
        return 1; // Exit with an error code
    }
    // Insertion in array
    for (int i = n - 1; i >= position; i--)
    {
        a[i + 1] = a[i];
    }
    a[position] = value;
    n = n + 1;
    cout << "Array elements after Insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "   ";
    }
    cout << endl;
    return 0;
}
