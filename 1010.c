#include <stdio.h>
 
int main() {
    int COD1, COD2, QTD1, QTD2;
    float VAL1, VAL2;
    
    scanf("%d", &COD1);
    scanf("%d", &QTD1);
    scanf("%f", &VAL1);
    scanf("%d", &COD2);
    scanf("%d", &QTD2);
    scanf("%f", &VAL2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", (QTD1 * VAL1) + (QTD2 * VAL2));
 
    return 0;
}