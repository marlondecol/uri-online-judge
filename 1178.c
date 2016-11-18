#include <stdio.h>
 
int main() {
	double X, N[100];
	int i;
	
	scanf("%lf", &X);
	
	N[0] = X;
	
	for(i = 1; i < 100; i++)
	{
		N[i] = X / 2;
		X = N[i];
	}
	
	for(i = 0; i < 100; i++)
	{
		printf("N[%d] = %.4lf\n", i, N[i]);
	}
 
    return 0;
}