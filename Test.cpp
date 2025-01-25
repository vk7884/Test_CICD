// C++ Program to illustrate how to use the move constructor
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Simple {

public:
    // Constructor
    

    // Function to print the value
    void print()
    {
        cout << "Hell world!"<< endl;
    }
};

int main()
{
    // Create a Simple object with value 42
    Simple s1;
    s1.print();

    return 0;
}