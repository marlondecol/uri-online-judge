#include <stdio.h>
 
int main() {
 
    float X, Y, MEDIA;
    
    scanf("%f",&X);
    scanf("%f",&Y);
    
    MEDIA = ((X * 3.5) + (Y * 7.5)) / (3.5 + 7.5);
    
    printf("MEDIA = %.5f\n", MEDIA);
 
    return 0;
}