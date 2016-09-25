#include <iostream>
using namespace std;

int main( )
{
    int c;
    c = 5;
    cout << c-- << '\n' << endl;
    c = 5;
    cout << --c << '\n' << endl;

    c = 5;
    cout << c << '\n' << c-- << '\n' << endl;
    c = 5;
    cout << c << '\n' << --c << '\n' << endl;

    int i, x;

    i = 1;
    x= i++ - ++i * i++;
    cout << "i=" << i << ", x=" << x << endl;
}
