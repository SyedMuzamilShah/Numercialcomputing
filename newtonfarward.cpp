// //Netwon Farward
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    float X[10][10], P;
    int I, J, M, N; // N = 7
    cout << "Enter Number Of Observation : ";
    cin >> N;
    M = N + 1; // M = 8
    for (I = 0; I < N; I++)
    {
        cout << "X[" << I << "] = ";
        cin >> X[I][0];
        cout << "F[" << I << "] = ";
        cin >> X[I][1];
    }
    for (J = 2; J < M; J++)
    {
        for (I = 0; I < N; I++)
        {
            X[I][J] = X[I + 1][J - 1] - X[I][J - 1];
        }
    }

    // Technique Calculate
    cout << "Enter the value at which you want to interpolate (P): ";
    cin >> P;
    float Result = X[0][1];
    float Mid_X;
    float W = X[1][0] - X[0][0];

    for (I = 1; I < N; I++)
    {
        Mid_X = 1;
        for (J = 0; J < I; J++)
        {
            Mid_X *= (P - X[J][0]);
        }

        Result += (Mid_X * X[0][I + 1]) / (factorial(I) * pow(W, I));
    }

    cout << "The value of result is : " << Result;

    return 0;
}