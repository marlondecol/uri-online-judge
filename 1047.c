#include <stdio.h>
 
int main() {
    int hi, mi, hf, mf, h, m;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    if (mf >= mi) {
        m = mf - mi;

        if (hf > hi) {
            h = hf - hi;
        } else {
            h = (hf + 24) - hi;
        }
    } else {
        m = (mf + 60) - mi;
        hf--;

        if (hf >= hi) {
            h = hf - hi;
        } else {
            h = (hf + 24) - hi;
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
 
    return 0;
}