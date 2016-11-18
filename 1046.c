#include <stdio.h>
 
int main() {
    int INI, FIM;
    
    scanf("%d", &INI);
    scanf("%d", &FIM);
    
    if (INI >= FIM) printf("O JOGO DUROU %d HORA(S)\n", (FIM + 24) - INI);
    else printf("O JOGO DUROU %d HORA(S)\n", FIM - INI);
 
    return 0;
}