#include <iostream>
using namespace std;
// Define a class template Adder
template <class T1, class T2>
class Adder
{
private:
    T1 num1;
    T2 num2;

public:
    // Constructor to initialize num1 and num2
    Adder(T1 a, T2 b) : num1(a), num2(b) {}

    // Function to add num1 and num2 and return the result
    auto sum()
    {
        return num1 + num2;
    }
};
int main()
{
    // Create an Adder object with int and double values
    Adder<int, double> adder1(10, 20.5);

    // Calculate and display the sum
    cout << "Sum: " << adder1.sum() << endl;

    return 0;
}