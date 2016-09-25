#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main( )
{
    float  x = log(3.0f);
    double y = log(3.0);
    long double z = log(3.0l);

    cout << setprecision(20) << "float = \t" << x << "\ndouble = \t" << y
         << "\nlong double = \t" << z << endl;

    cout << "\n12345678901234567890123\n\n";
    cout << setprecision(20) << 10.45 << endl;
    cout << setprecision(20) << 10.45l << endl;
    cout << setprecision(20) << 10.45f << endl;

    cout << "\n12345678901234567890123\n\n";
    cout << fixed << setprecision(20) << 10.45 << endl;
    cout << fixed << setprecision(20) << 10.45l << endl;
    cout << fixed << setprecision(20) << 10.45f << endl;

}

