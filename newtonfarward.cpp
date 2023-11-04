#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float X[10][10];
    int I,J,M,N;        // N = 7
    cout << "Enter Number Of Observation : "; cin >> N;
    M = N+1;            // M = 8
    for (I = 0; I < N; I++)
    {
        cout << "X[" << I << "] = "; cin >> X[I][0]; 
        cout << "F[" << I << "] = "; cin >> X[I][1]; 
    }
    for (J = 2; J < M; J++)
    {
        for (I = 0; I < N; I++)
        {
            X[I][J] = X[I+1][J-1]-X[I][J-1];
        }
        
    }
    
    for (I = 0; I < N; I++)
    {
        for (J = 0; J < M-I; J++)
        {
            cout <<setw(5) << X[I][J];
        }
        cout << endl;
        
    }
    
    
    return 0;
}