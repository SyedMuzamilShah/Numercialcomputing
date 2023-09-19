#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float X[20], FX, FDX;
    int i = 0;
    cout << "Enter The Bound Value :\t";
    cin >> X[i];
    do
    {
        FX = X[i] * X[i] * X[i] - 10 * X[i] + 1;
        FDX = 3 * X[i] * X[i] - 10;
        X[i + 1] = X[i] - (FX / FDX);
        i++;
    } while (fabs(X[i-1] - X[i]) > 0.0001);

    cout << "Number of Itration : " << i << "\n";
    cout << "Root Is : " << X[i];
    return 0;
}