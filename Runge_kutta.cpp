#include <iostream>
using namespace std;

float func(float x, float y){
    return 2 * x + 3 * y;
}


int main()
{
    float X[20], Y[20], W;  // W is the length
    float K1, K2, K3, K4;
    int I = 0;
    cout << "Enter The X1  : ";
    cin >> X[I];
    cout << "Enter The Y1  : ";
    cin >> Y[I];
    cout << "Enter The Len : ";
    cin >> W;

    while (I <= 10)
    {
        K1 = W * (func(X[I],Y[I]));
        K2 = W * (func(X[I]+ W/2, Y[I]+ K1/2));
        K3 = W * (func(X[I]+ W/2, Y[I]+ K2/2));
        K4 = W * (func(X[I]+ W  , Y[I]+ K2  ));


        cout << "K1 : " << K1 << "\tK2 : " << K2 << "\tK3 : " << K3 << "\tK4 : " << K4 << endl;
        X[I + 1] = X[I] + W;
        Y[I + 1] = (Y[I] + (0.1667) * (K1 + 2 * K2 + 2 * K3 + K4));

        cout << "X[" << I << "]\t=\t" << X[I] << endl;
        cout << "Y[" << I << "]\t=\t" << Y[I] << endl;
        I++;
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