#include <stdio.h>
 
int main() {
    char NOME[20];
    float SALARIO, VENDA;
    
    scanf("%s", NOME);
    scanf("%f", &SALARIO);
    scanf("%f", &VENDA);
    
    printf("TOTAL = R$ %.2f\n", SALARIO + (VENDA * 0.15));
 
    return 0;
}