#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Step 1: Create an empty vector
    vector<int> myVector;

    // Step 2: Add elements to the vector using push_back
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Display the elements in the vector
    cout << "Elements in the vector: ";
    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}
