#include <iostream>
using namespace std;
#include <math.h>
float FunctionDefined(float x)
{
    return (x * x * x) - (10 * x) + 1;
}
int main()
{
    float Lower[14], Upper[14], MidValue[14];
    float LowerFunc, UpperFunc, MidValueFunc;
    int i = 0;
    int Loo1;
    int Loo2;
    cout << "Enter the Lower Bound : ";
    cin >> Lower[i];
    cout << "Enter the Upper Bound : ";
    cin >> Upper[i];
 
    do
    {
        LowerFunc = FunctionDefined(Lower[i]);
        UpperFunc = FunctionDefined(Upper[i]);

        MidValue[i] = (Lower[i] + Upper[i])/2;
        MidValueFunc = FunctionDefined(MidValue[i]);
        if (LowerFunc * MidValueFunc < 0)
        {
            Lower[i+1] = Lower[i];
            Upper[i+1] = MidValue[i];
        }
        else
        {
            Lower[i+1] = MidValue[i];
            Upper[i+1] = Upper[i];
        }
        i++;
    } while (fabs(Lower[i] - Upper[i]) > 0.0001);
    cout << "Number Of Itreation : " << i << "\n";
    cout << "X Root Is : " << Lower[i] << " \nY Root Is : " << Upper[i];
    return 0;
}

