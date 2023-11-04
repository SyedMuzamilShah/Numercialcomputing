#include <iostream>
using namespace std;
int main()
{
    float x[10], fx[10], xp, l, r = 0;
    int i, j, n;
    cout << "enter value of N";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "enter value of x";
        cin >> x[i];
        cout << "enter value of FX";
        cin >> fx[i];
    }

    cout << "enter value of x where you want to find Fx" << endl;
    for (i = 0; i < n; i++)
    {
        l = 1;
        for (j = 0; j < n; j++)
            if (i != j)
                l *= (xp - x[j]) / (x[i] - x[j]);
        r += fx[i] * l;
        cout << "fx=" << r << "at x =" << xp;

    }
        return 0;
}