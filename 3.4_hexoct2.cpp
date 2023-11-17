#include <iostream>

int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    // cout << hex; // manipulator for changing number base
    cout << hex << "waist = " << waist << " hexadecimal for 42 "<< endl;
    cout << oct << endl;
    cout << "inseam = " << inseam << " (otal for 42) " << endl;
    cout << "chest = " << chest << " (otal for 42)" << endl;

    cout << dec;
    cout << "chest = " << chest << " (decimal for 42)" << endl;

    
    return 0;
}