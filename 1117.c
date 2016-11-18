#include <stdio.h>
 
int main() {
    int i, aux = 0;
    double N, T;

    while (aux < 2) {
        scanf("%lf", &N);

        if(N < 0 || N > 10) {
            printf("nota invalida\n");
        } else {
            T += N;
            aux++;
        }
    }

    printf("media = %.2lf\n", T / 2);
 
    return 0;
}