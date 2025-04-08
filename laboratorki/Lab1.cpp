#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "ukrainian");

    double R1, R2, H, D, S1, S, S2, SH1, SH2;
    R1 = 3;
    H = 0.5;
    D = 0.85;
    R2 = R1 * D;

    S2 = M_PI * sqrt(R2);
    S1 = M_PI * sqrt(R1) - S2;
    SH1 = H * M_PI * 2 * R1;
    SH2 = H * M_PI * 2 * R2;
    
    S = 2 * (S1 + S2) + SH1 + SH2;

    printf("Площа кiльця: %f см", S);


}


