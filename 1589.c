#include <stdio.h>
 
int main() {
    int i, N, X, Y;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        scanf("%d %d", &X, &Y);

        printf("%d\n", X + Y);
    }
 
    return 0;
}