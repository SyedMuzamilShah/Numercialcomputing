// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float X[20], FX, FDX;
//     int i = 0;
//     cout << "Enter The Bound Value :\t";
//     cin >> X[i];
//     do
//     {
//         FX = X[i] * X[i] * X[i] - 10 * X[i] + 1;
//         FDX = 3 * X[i] * X[i] - 10;
//         X[i + 1] = X[i] - (FX / FDX);
//         i++;
//     } while (fabs(X[i-1] - X[i]) > 0.0001);

//     cout << "Number of Itration : " << i << "\n";
//     cout << "Root Is : " << X[i];
//     return 0;
// }

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
    cout << "Final Absolute Value IS : " << X[I];
    return 0;
}
