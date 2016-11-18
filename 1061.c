#include <stdio.h>
 
int main() {
    int di, hi, mi, si, df, hf, mf, sf, d, h, m, s;
    char a[10];

    scanf("%s%d", a, &di);
    scanf("%d%s%d%s%d", &hi, a, &mi, a, &si);
    scanf("%s%d", a, &df);
    scanf("%d%s%d%s%d", &hf, a, &mf, a, &sf);


    if (sf < si) {
        s = (sf + 60) - si;
        mf--;
    } else {
        s = sf - si;
    }

    if (mf < mi) {
        m = (mf + 60) - mi;
        hf--;
    } else {
        m = mf - mi;
    }

    if (hf < hi) {
        h = (hf + 24) - hi;
        df--;
    } else {
        h = hf - hi;
    }

    d = df - di;

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);
 
    return 0;
}