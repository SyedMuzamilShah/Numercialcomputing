#include <iostream>
using namespace std;

int main()
{
    float X[20], Y[20], Lenght;
    float K1, K2, K3, K4;
    int Counter = 0;
    cout << "Enter The X1  : ";
    cin >> X[Counter];
    cout << "Enter The Y1  : ";
    cin >> Y[Counter];
    cout << "Enter The Len : ";
    cin >> Lenght;

    while (Counter <= 10)
    {
        K1 = Lenght * (2 * (X[Counter]) + 3 * (Y[Counter]));
        K2 = Lenght * (2 * (X[Counter] + Lenght / 2) + 3 * (Y[Counter]) + K1 / 2);
        K3 = Lenght * (2 * (X[Counter] + Lenght / 2) + 3 * (Y[Counter] + K2 / 2));
        K4 = Lenght * (2 * (X[Counter] + Lenght) + 3 * (Y[Counter] + K3));

        cout << "K1 : " << K1 << "\tK2 : " << K2 << "\tK3 : " << K3 << "\tK4 : " << K4 << endl;
        X[Counter + 1] = X[Counter] + Lenght;
        Y[Counter + 1] = (Y[Counter] + (0.1667) * (K1 + 2 * K2 + 2 * K3 + K4));

        cout << "X[" << Counter << "]\t=\t" << X[Counter] << endl;
        cout << "Y[" << Counter << "]\t=\t" << Y[Counter] << endl;
        Counter++;
    }

    return 0;
}

// (X1,Y1)
// K1 = (X,Y)
// K2 = (X + w/2, Y + k1/2)
// K3 = (X + w/2, Y + k2/2)
// K3 = (X + w, Y + k3)

// X2 = W+X1
// Y2 = Y1 + 1/6 (K1, 2k2, 2K3, K4)