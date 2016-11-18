#include <stdio.h>
 
int main() {
    int idade;
    int cont = 0;
    float soma = 0;

    while (1) {
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        } else {
            soma += idade;
            cont++;
        }
    }

    printf("%.2f\n", soma / cont);
 
    return 0;
}