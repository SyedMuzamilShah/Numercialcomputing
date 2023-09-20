#include <iostream>
using namespace std;
int main (){
    float UpperLimit, LowerLimite, HeightRange, Total, MidTotal;
    int NumberOfStep, NumberOfLoop = 0;
    cout << "Enter UpperLimit   : "; cin >> UpperLimit;
    cout << "Enter LowerLimite  : "; cin >> LowerLimite;
    cout << "Enter NumberOfStep : "; cin >> NumberOfStep;

    //W is find 
    HeightRange = (UpperLimit - LowerLimite)/NumberOfStep;

    // Set The Length of Array for Values And Its Function
    float Values[NumberOfStep], ValuesFunc[NumberOfStep];

    //Set The First Lower Limite Take from User
    Values[NumberOfLoop] = LowerLimite;

    //Calculate The Values Formula Is A[i] + HeightRange
    for (int i = 1; i <= NumberOfStep; i++)
    {
        Values[i] = Values[i-1] + HeightRange;
    }

    //Calculate The F(x) = 1/1+x^2
    for (int i = 0; i <= NumberOfStep; i++)
    {
        ValuesFunc[i] = 1/(1 + (Values[i] * Values[i]));
    }
    

    //Mid Value Add Which is F1+ F2 + ... + F(n-1)
    for (int i = 1; i < NumberOfStep; i++)
    {
        MidTotal += ValuesFunc[i];
    }
    

    //Find The Last Answer
    Total = (HeightRange/3) * (ValuesFunc[0] + ValuesFunc[NumberOfStep] + 2 * (MidTotal));


    //Out Put Of Last Question
    cout << "Total Is Equal To : " << Total;

    return 0;
}