#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)   return 1;
    else    return n * factorial(n - 1);
}
int main()
{
    float X[10][10], P;
    int I, J, M, N;
    cout << "Enter Number Of Observation : ";
    cin >> N;
    M = N + 1;
    for (I = 0; I < N; I++)
    {
        cout << "X[" << I << "] = ";
        cin >> X[I][0];
        cout << "F[" << I << "] = ";
        cin >> X[I][1];
    }
    for (J = 2; J < M; J++)
    {
        for (I = 1; I < N; I++)
        {
            X[I][J] = X[I][J - 1] - X[I - 1][J - 1];
        }
    }

    for (I = 0; I < N; I++)
    {
        for (J = 0; J < I + 2; J++)
        {
            cout << setw(5) << X[I][J];
        }
        cout << endl;
    }

    // Technique Calculate
    cout << "Enter the value at which you want to interpolate (P): ";
    cin >> P;
    float Result = X[N - 1][1];
    float Mid_X;
    float W = X[1][0] - X[0][0];
    int d = 1;
    for (I = N - 1; I > 1; I--)
    {
        Mid_X = 1;
        for (J = N - 1; J >= I; J--)
        {
            Mid_X *= (P - X[J][0]);
        }

        Result += (Mid_X * X[N - 1][d + 1]) / (factorial(d) * pow(W, d));
        d++;
    }

    cout << "The value of result is : " << Result;

    return 0;
}