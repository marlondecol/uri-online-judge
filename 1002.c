#include <stdio.h>
 
int main() {
    double RAIO, AREA;
    
    scanf("%lf", &RAIO);
    
    AREA = (RAIO * RAIO) * 3.14159;
    
    printf("A=%.4lf\n", AREA);
 
    return 0;
}