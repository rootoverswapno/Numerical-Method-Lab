#include <bits/stdc++.h>
using namespace std;

int main() {
    double x = 0, y = 0, z = 0;  
    double tol = 1e-6;
    int itr = 0;

    while (true) {
        double x_old = x, y_old = y, z_old = z;

        
        x = (12 - y - z) / 10.0;           
        y = (13 - 2*x - z) / 10.0;        
        z = (14 - 2*x - 2*y) / 10.0;      

        itr++;

       
        if (fabs(x - x_old) < tol && fabs(y - y_old) < tol && fabs(z - z_old) < tol)
            break;
    }

    cout << fixed << setprecision(6);
    cout << "Gauss-Seidel Result : x= " << x
         << ", y= " << y
         << ", z= " << z << endl;
    cout << "Iteration : " << itr << endl;

    return 0;
}
