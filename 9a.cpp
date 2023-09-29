#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> Kumu = {1, 2, 3, 4, 5, 6};
    /*Here, you declare a vector named Kumu of integers and initialize it with values 1, 2, 3, 4, 5, and 6.
    Just like before, a vector is a dynamic array-like data structure in C++.*/
    vector<int>::iterator NomNom;
    /*You declare an iterator named NomNom for the vector Kumu. 
    An iterator is used to traverse through the elements of a container, and in this case, 
    it allows you to access the elements of the vector one by one.*/
    cout << "Vector Elements are : ";
    for (NomNom = Kumu.begin(); NomNom != Kumu.end(); NomNom++)
    {
        cout << *NomNom << " ";
    }
    /*This for loop is used to iterate through the vector.
    It starts by initializing NomNom to the beginning of the vector (Kumu.begin()),
    and it continues as long as NomNom is not equal to the end of the vector (Kumu.end()).
    Inside the loop, you use *NomNom to access the current element pointed to by the iterator and print it. 
    This loop effectively prints all the elements of the vector.*/
    cout << '\n';
}
