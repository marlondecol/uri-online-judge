#include <stdio.h>
 
int main() {
    double A, B, C, DELTA, R1, R2;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    DELTA = pow(B, 2) - (4 * A * C);
    
    if (A == 0 || DELTA < 0) printf("Impossivel calcular\n");
    else {
        R1 = (-B + sqrt(DELTA)) / (2 * A);
        R2 = (-B - sqrt(DELTA)) / (2 * A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
 
    return 0;
}