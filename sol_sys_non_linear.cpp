#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    int I = 0;
    float X[20], Y[20];
    float F, G, Fx, Fy, Gx, Gy;
    cout << "Enter X0 Gauss Value : "; cin >> X[I];
    cout << "Enter Y0 Gauss Value : "; cin >> Y[I];

    do
    {
        F = X[I] * X[I] + Y[I] * Y[I] - 1;
        G = X[I] * X[I] - Y[I] * Y[I] + 1;
        Fx = 2 * X[I];
        Fy = 2 * Y[I];
        Gx = 2 * X[I];
        Gy = -2 * Y[I];
        X[I+1] = X[I] + (((G * Fy) - (F * Gy))/((Fx * Gy) - (Fy * Gx)));
        Y[I+1] = Y[I] + ((F * Gy - G * Fy)/(Fx * Gy - Fy * Gx));
        I++;

        cout << "X [" << I << "] : " << setw(4) << X[I] << "\t\t";
        cout << "Y [" << I << "] : " << Y[I] << endl;
    } while (fabs(X[I] - X[I-1]) > 0.0001 || fabs(Y[I] - Y[I-1]) > 0.0001);
    
    return 0;
}

// f = X^2 + Y^2 - 1;
// g = X^2 - Y^2 + 1;

// X - x > 0.0001 || Y - y > 0.0001

