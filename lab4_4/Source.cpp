// lab4.4_.cpp
// < Демчук Анастасія >
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком //
// Варіант 14
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    double R, xp, xk, dx, y, x;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R ="; cin >> R;
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (x <= -4)
            y = -2;
        else
            if (-4 < x && x <= 0)
                y = 1. / 4. * x;
            else

                if (2 < x)
                    y = (-0.5 * x) + (5);
                else
                    y = pow(x, 2);

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}