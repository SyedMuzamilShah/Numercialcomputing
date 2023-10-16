#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float A[20], B[20], FB, FA, W, Fw;
    int I = 0;
    cout << "Enter Lower Bound : "; cin >> A[I];
    cout << "Enter Upper Bound : "; cin >> B[I];
    do
    {
        FA = (A[I] * A[I] * A[I] - 10 * A[I] + 1);
        FB = (B[I] * B[I] * B[I] - 10 * B[I] + 1);
        W = (A[I] + B[I])/2;
        Fw = (W * W * W - 10 * W + 1);

        cout << I+1 <<")\tFunc A : " << FA << "\t\tFunc B : " << FB << "\t\tFunc W : " << Fw << endl; 
        if (FA * Fw < 0){
            A[I+1] = A[I];
            B[I+1] = W;
        }else{
            A[I+1] = W;
            B[I+1] = B[I];
        }
    I++;
    } while (fabs(A[I] - B[I]) > 0.0001);

    cout << "Absolut Value Of A : " << A[I] << endl;
    cout << "Absolut Value Of B : " << B[I] << endl;
    
}