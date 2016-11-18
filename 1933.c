#include <stdio.h>
 
int main() {
    int C1, C2;
    
    scanf("%d",&C1);
    scanf("%d",&C2);
    
    if (C1 > C2) printf("%d\n",C1);
    else if (C1 < C2) printf("%d\n",C2);
    else printf("%d\n",C1);
 
    return 0;
}