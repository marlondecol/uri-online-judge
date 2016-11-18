#include <stdio.h>
 
int main() {
    int N, X, Y, S, C, i;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        S = 0;
        C = 0;

        scanf("%d %d", &X, &Y);

        while (C < Y) {
            if (X % 2 != 0) {
                S += X;
                C++;
            }

            X++;
        }

        printf("%d\n", S);
    }
 
    return 0;
}