#include <iostream>
using namespace std;

float funcone(float z){
    return z;
}

float functwo(float x, float y, float z){
    return (6*y) - (3 * x * z);
}
int main(){
    float X[10], Y[10], Z[10], K1, K2, K3, K4, M1, M2, M3, M4, W = 0.1;
    cout << "Enter First Guass Value for X: "; cin >> X[0];
    cout << "Enter First Guass Value for Y: "; cin >> Y[0];
    cout << "Enter First Guass Value for Z: "; cin >> Z[0];
    int I;
    cout << "Enter THe Loop Iteration : "; cin >> I;

    for (int j = 0; j < I; j++)
    {
        K1 = W * funcone(Z[j]);
        M1 = W * functwo(X[j], Y[j], Z[j]);

        K2 = W * funcone((Z[j]+(M1/2)));
        M2 = W * functwo((X[j] + (W/2)), ((Y[j] + (K1/2))), (Z[j]+(M1/2)));
   
        K3 = W * funcone((Z[j]+(M2/2)));
        M3 = W * functwo((X[j] + (W/2)), ((Y[j] + (K2/2))), (Z[j]+(M2/2)));

        K4 = W * funcone(Z[j]+M3);
        M4 = W * functwo((X[j] + W), ((Y[j] + K3)), (Z[j]+M3));


        X[j+1] = X[j] + W;
        Y[j+1] = Y[j] + (float(1)/float(6)) * (K1+ (2*K2) + (2*K3) + K4);
        Z[j+1] = Z[j] + (float(1)/float(6)) * (M1+ 2*M2 + 2*M3 + M4);


        cout << "X = : " << X[j+1] << "\t\t";
        cout << "Y = : " << Y[j+1] << "\t\t";
        cout << "Z = : " << Z[j+1] << endl;
        
        cout << "K1["<<j+1<<"] = " << K1 << "\t\t";
        cout << "M1["<<j+1<<"] = " << M1 << endl;

        cout << "K2["<<j+1<<"] = " << K2 << "\t\t";
        cout << "M2["<<j+1<<"] = " << M2 << endl;
        
        cout << "K3["<<j+1<<"] = " << K3 << "\t\t";
        cout << "M3["<<j+1<<"] = " << M3 << endl;
        
        cout << "K4["<<j+1<<"] = " << K4 << "\t\t";
        cout << "M4["<<j+1<<"] = " << M4 << endl;
    }
    
    return 0;
}