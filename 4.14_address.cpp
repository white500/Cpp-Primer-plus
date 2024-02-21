#include <iostream>

int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    system("chcp 65001");
    cout << "donuts value = " << donuts;
    cout << " and donuts adress = " << hex << &donuts << endl;
    cout << "cups value = " << cups;
    cout << " and cups address = " << hex << &cups << endl; 
    cout << "我是中文" << endl;
    return 0;
}