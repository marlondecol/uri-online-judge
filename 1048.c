#include <stdio.h>
 
int main() {
    float salario, reajuste;
    int percent;
    
    scanf("%f", &salario);
    
    if (salario <= 400) {
        reajuste = salario * 0.15;
        salario += reajuste;
        percent = 15;
    } else if (salario > 400 && salario <= 800) {
        reajuste = salario * 0.12;
        salario += reajuste;
        percent = 12;
    } else if (salario > 800 && salario <= 1200) {
        reajuste = salario * 0.10;
        salario += reajuste;
        percent = 10;
    } else if (salario > 1200 && salario <= 2000) {
        reajuste = salario * 0.07;
        salario += reajuste;
        percent = 7;
    } else {
        reajuste = salario * 0.04;
        salario += reajuste;
        percent = 4;
    }
    
    printf("Novo salario: %.2f\n", salario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n", percent);
 
    return 0;
}