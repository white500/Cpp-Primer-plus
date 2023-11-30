#include <iostream>

int main()
{
    using namespace std;
    const double factor = 0.08333333;

    cout << "please input height: ____\b\b\b\b";
    int height;
    cin >> height;

    int height_foot = height * factor;
    int height_inch = height % height_foot;

    cout << "height: foot " << height_foot 
         << " inch " << height_inch << endl; 

    return 0;
}