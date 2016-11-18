#include <stdio.h>
 
int main() {
    int i, N, P;
    int T = 0;
    int C = 0;
    int R = 0;
    int S = 0;
    char tipo;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        scanf("%d %c", &P, &tipo);

        T += P;

        if (tipo == 'C') C += P;
        else if (tipo == 'R') R += P;
        else if (tipo == 'S') S += P;
    }

    printf("Total: %d cobaias\n", T);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2lf %%\n", (C * 100.0) / T);
    printf("Percentual de ratos: %.2lf %%\n", (R * 100.0) / T);
    printf("Percentual de sapos: %.2lf %%\n", (S * 100.0) / T);
 
    return 0;
}