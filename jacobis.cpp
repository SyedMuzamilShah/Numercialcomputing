#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float X1[20], X2[20], X3[20], X4[20];
    int I = 0;
    X1[I] = 0, X2[I] = 0, X3[I] = 0, X4[I] = 0;
    do
    {
        X1[I+1] = (18 - 5 * X2[I] + X3[I] - X4[I])/13;
        X2[I+1] = (13 - 2 * X1[I] - X3[I] - 4 * X4[I])/12;
        X3[I+1] = (29 - 3 * X1[I] + 4 * X2[I] - X4[I])/10;
        X4[I+1] = (31 - 2 * X1[I] - X2[I] - 3 * X3[I])/9;
        I++;
    } while (fabs(X1[I] - X1[I-1]) < 0.0001 && 
             fabs(X2[I] - X2[I-1]) < 0.0001 && 
             fabs(X3[I] - X3[I-1]) < 0.0001 && 
             fabs(X4[I] - X4[I-1]) < 0.0001 
            );
    
    cout << "X1 Root : " << X1[I] <<endl;
    cout << "X2 Root : " << X2[I] <<endl;
    cout << "X3 Root : " << X3[I] <<endl;
    cout << "X4 Root : " << X4[I] <<endl;
    return 0;
}