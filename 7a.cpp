#include <iostream>
using namespace std;

template <class type>
type largest(type a, type b)
{
    return (a > b) ? a : b;
}
int main()
{
    cout << largest(10, 20);
    cout << endl;
    cout << largest(10.25, 20.75);
    cout << endl;
    cout << largest(10.1252, 20.3342);
}
