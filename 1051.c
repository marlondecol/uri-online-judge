#include <stdio.h>
 
int main() {
    float RENDA, IR;
    
    scanf("%f", &RENDA);
    
    if (RENDA <= 2000) {
        printf("Isento\n");
    } else if (RENDA > 2000 && RENDA <= 3000) {
        IR = (RENDA - 2000) * 0.08;
        printf("R$ %.2f\n", IR);
    } else if (RENDA > 3000 && RENDA <= 4500) {
        IR = 80 + ((RENDA - 3000) * 0.18);
        printf("R$ %.2f\n", IR);
    } else {
        IR = 350 + ((RENDA - 4500) * 0.28);
        printf("R$ %.2f\n", IR);
    }
 
    return 0;
}