#include <bits/stdc++.h>
using namespace std;
int a[100];
void insertX(int n, int x, int pos)
{
    for (int i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = x;
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
    cout << "After inserting at the beginning, the array is : ";
    n++;
    insertX(n, 50, 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
    cout << "After inserting at the middle, the array is : ";
    int mid = (n / 2) + (n % 2 != 0);
    n++;
    insertX(n, 50, mid);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
    cout << "After inserting at the end, the array is : ";
    n++;
    insertX(n, 50, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
    return 0;
}
