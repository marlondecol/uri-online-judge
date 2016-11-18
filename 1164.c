#include <stdio.h>
 
int main() {
    int X, N, S, i, j, aux;

    scanf("%d", &X);

    for (i = 1; i <= X; i++) {
        scanf("%d", &N);

        S = 0;

        for (j = 1; j < N; j++) {
            if (N % j == 0) {
                S += j;
            }
        }

        if (S == N) {
            printf("%d eh perfeito\n", N);
        } else {
            printf("%d nao eh perfeito\n", N);
        }
    }
 
    return 0;
}