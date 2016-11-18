#include <stdio.h>
 
int main() {
    int N, H;
    float S;
    
    scanf("%d",&N);
    scanf("%d",&H);
    scanf("%f",&S);
    
    printf("NUMBER = %d\n",N);
    printf("SALARY = U$ %.2f\n",H * S);
 
    return 0;
}