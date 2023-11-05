#include <iostream>
using namespace std;
int main()
{
    float X[10], FX[10], XP, L, R = 0;
    int I, J, N;
    cout << "Enter Number Of N : ";
    cin >> N;
    for (I = 0; I < N; I++)
    {
        cout << "Enter Value Of X  : ";  cin >> X[I];
        cout << "Enter Value Of Fx : ";  cin >> FX[I];
    }

    cout << "Enter Value Which You Want To Predict : "; cin >> XP;
    for (I = 0; I < N; I++)
    {
        L = 1;
        for (J = 0; J < N; J++){
            if (I != J){L *= (XP - X[J]) / (X[I] - X[J]);}
        }
        R += FX[I] * L;
    }
        cout << "If x = " << XP << " Then " << "F(x) = " << R;

        return 0;
}