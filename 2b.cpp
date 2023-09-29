#include <bits/stdc++.h>
using namespace std;
int a[100];
void Delete(int n, int positive)
{
    for (int i = positive - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
}
int main()
{
    int n;
    cout << "Enter Array size : ";
    cin >> n;
    cout << "Enter Array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "After deleting at the beginning,the array is : ";
    Delete(n, 1);
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
    cout << "After deleting at the middle,the array is : ";
    int mid = n / 2 + (n % 2 != 0);
    Delete(n, mid);
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
    cout << "After deleting at the end,the array is : ";
    Delete(n, n);
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
    return 0;
}
