#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> kumu[5];
    int edge, node;
    cout << "Enter Node and Edge Number: "
         << "\n";
    cin >> node >> edge;
    cout << "Enter connection between the nodes: "
         << "\n";
    int n1, n2;
    for (int i = 0; i < edge; i++)
    {
        cin >> n1 >> n2;
        kumu[n1].push_back(n2);
        kumu[n2].push_back(n1);
    }
    for (int i = 0; i < kumu[1].size(); i++)
    {
        cout << kumu[1][i] << " -> ";
    }
    cout << "NULL";
}
