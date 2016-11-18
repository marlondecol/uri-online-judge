#include <stdio.h>
 
int main() {
    double TEMPO, VELOC, LITRO;
    
    scanf("%lf", &TEMPO);
    scanf("%lf", &VELOC);
    
    LITRO = (TEMPO * VELOC) / 12;
    
    printf("%.3lf\n", LITRO);
 
    return 0;
}