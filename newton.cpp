#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float X[20];
    int I = 0;
    cout << "Enter Guass Values : "; cin >> X[I];
    cout << "The Value OF X Is : " << X[I] << " At Index : " << I << endl;
    do
    {
        float Fx = X[I] * X[I] * X[I] - 10 * X[I] + 1;
        float Fdx = 3 * X[I] * X[I] - 10;
        X[I+1] = X[I] - (Fx/Fdx);
        I++;
        cout << "The Value OF X Is : " << X[I] << " At Index : " << I << endl;
    } while (fabs(X[I] - X[I-1]) > 0.0001);
    cout << "Final Absolute Value IS : " << X[I] << " At Index : " << I << endl;
    return 0;
}
