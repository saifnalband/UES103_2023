#include <stdio.h>
#include <math.h>
/*
* Simple program to compute the resonant frequency of
* an RLC circuit
*/
int main()
{
    double l; /* Inductance in millihenrys */
    double c; /* Capacitance in microfarads */
    double omega; /* Resonance frequency in radians per second */
    double f; /* Resonance frequency in Hertz */
    printf("Enter the inductance in millihenrys: ");
    scanf("%lf", &l);
    printf("Enter the capacitance in microfarads: ");
    scanf("%lf", &c);
    omega = 1.0 / sqrt((l / 1000) * (c / 1000000));
    f = omega / (2 * M_PI);
    printf("Resonant frequency: %.2f\n", f);
}
