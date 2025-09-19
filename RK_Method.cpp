#include <bits/stdc++.h>
using namespace std;

// Example ODE: dy/dx = f(x, y) = x + y
double f(double x, double y) {
    return x + y;
}
void RK4(double x0, double y0, double h, double xn) {
    double x = x0, y = y0;
    cout << fixed << setprecision(6);
    cout << "x\t\ty\n";

    while (x <= xn + 1e-10) {
        cout << x << "\t" << y << "\n";

        double k1 = h * f(x, y);
        double k2 = h * f(x + h/2.0, y + k1/2.0);
        double k3 = h * f(x + h/2.0, y + k2/2.0);
        double k4 = h * f(x + h, y + k3);

        y = y + (k1 + 2*k2 + 2*k3 + k4)/6.0;
        x = x + h;
    }
}

int main() {
    double x0 = 0, y0 = 1; 
    double h = 0.1;
    double xn = 1.0;      

    cout << "Runge-Kutta 4th Order Method:\n";
    RK4(x0, y0, h, xn);

    return 0;
}
