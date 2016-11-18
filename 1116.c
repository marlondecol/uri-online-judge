#include <stdio.h>
 
int main() {
    int i, N, X, Y;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        scanf ("%d %d", &X, &Y);

        if (Y == 0) {
            printf("divisao impossivel\n");
        } else {
            printf("%.1lf\n", (double) X / Y);
        }
    }
 
    return 0;
}