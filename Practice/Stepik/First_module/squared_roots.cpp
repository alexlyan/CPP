#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    double d = (b*b) - 4*a*c;

    double x_1, x_2;
    if (d >= 0) {
        x_1 = (-b + sqrt(d))/(2*a);
        x_2 = (-b - sqrt(d))/(2*a);
        cout << x_1 << " " << x_2;
    } else {
        cout << "No real roots";
    }
    return 0;
};
