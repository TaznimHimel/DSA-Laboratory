#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array size : ";
    cin >> n;
    vector<int> kumu(n);
    cout<<"Enter Array's Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> kumu[i];
    }
    for (int i = 1; i < n; i++)
    {
        int index = i;
        while (index >= 1)
        {
            if (kumu[index - 1] > kumu[index])
            {
                swap(kumu[index - 1], kumu[index]);
            }
            else
            {
                break;
            }
            index--;
        }
    }
    cout << "After Sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << kumu[i] << " ";
    }
    cout << '\n';
}
