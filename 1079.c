#include <stdio.h>
 
int main() {
    int i, N;
    double N1, N2, N3, M;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        scanf("%lf %lf %lf", &N1, &N2, &N3);

        printf("%.1lf\n", (N1 * 2 + N2 * 3 + N3 * 5) / 10);
    }
 
    return 0;
}