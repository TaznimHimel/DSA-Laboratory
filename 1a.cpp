#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Array size : ";
    cin >> n;
    int a[n];
    cout << "Enter Array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int mn = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[mn])
            {
                mn = j;
            }
        }
        swap(a[mn], a[i]);
    }
    cout << "After sorting, array elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
}
