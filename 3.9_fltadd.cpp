#include <iostream>

int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    // float的精度只会影响6位
    float a = 2.34E+7f;
    float b = a + 1.0f;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "b - a = " << b - a << endl;
    return 0;
}