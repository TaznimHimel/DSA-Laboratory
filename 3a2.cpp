#include <iostream>
using namespace std;
int main() {
    int a[20];
    int n;
    cout << "Enter your Array size (up to 20): ";
    cin >> n;
    if (n < 1 || n > 20) {
        cout << "Array size should be between 1 and 20." << endl;
        return 1; // Exit with an error code
    }
    cout << "Enter your Array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "\nArray elements before Deletion: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << "   ";
    }
    cout << endl << endl;
    int position;
    cout << "Enter the position to delete (0-based index): ";
    cin >> position;
    if (position < 0 || position >= n) {
        cout << "Invalid position. Position should be between 0 and " << (n - 1) << "." << endl;
        return 1; // Exit with an error code
    }
    // Deletion in array
    for (int i = position; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n = n - 1;
    cout << "Array elements after Deletion: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << "   ";
    }
    cout << endl;
    return 0;
}
