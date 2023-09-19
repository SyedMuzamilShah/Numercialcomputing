#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    float LowerA[20], UpperB[20], FA, FB, MIDW, FW;
    int i = 0;
    cout << "Enter Lower Bound : ";
    cin >> LowerA[i];
    cout << "Enter Upper Bound : ";
    cin >> UpperB[i];

    do {
        FA = LowerA[i] * LowerA[i] * LowerA[i] - 10 * LowerA[i] + 1;
        FB = UpperB[i] * UpperB[i] * UpperB[i] - 10 * UpperB[i] + 1;
        MIDW = (LowerA[i] * FB - UpperB[i] * FA) / (FB - FA);
        FW = MIDW * MIDW * MIDW - 10 * MIDW + 1;
        if ((FA * FW) < 0) {
            LowerA[i + 1] = LowerA[i];
            UpperB[i + 1] = MIDW;
        } else {
            LowerA[i + 1] = MIDW;
            UpperB[i + 1] = UpperB[i];
        }
        i++;
    } while (fabs(LowerA[i] - UpperB[i]) > 0.0001);
    cout << "Number Of Loop : " << i << "\n";
    cout << "Root A : " << LowerA[i] << "\n" << "Root B : " << UpperB[i];
    
    return 0;
}
