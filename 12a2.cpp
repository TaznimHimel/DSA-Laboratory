#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Step 1: Create a vector and add elements to it
    vector<int> myVector;
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Step 2: Access elements in the vector using indexing
    cout << "Accessing elements in the vector:" << endl;
    cout << "Element at index 0: " << myVector[0] << endl;
    cout << "Element at index 1: " << myVector[1] << endl;
    cout << "Element at index 2: " << myVector[2] << endl;

    return 0;
}
