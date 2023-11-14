#include <iostream>
#include <cmath>

// sqrt.cpp -- using the sqrt() function
int main () 
{
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    double c = pow(5.0, 8.0);
    cout << c << endl;
    return 0;
}