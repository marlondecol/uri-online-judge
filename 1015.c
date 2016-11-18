#include <stdio.h>
#include <math.h>
 
int main() {
    float X1, Y1, X2, Y2, R;
    
    scanf("%f", &X1);
    scanf("%f", &Y1);
    scanf("%f", &X2);
    scanf("%f", &Y2);
    
    R = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    
    printf("%.4f\n", R);
 
    return 0;
}