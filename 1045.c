#include <stdio.h>
 
int main() {
	double aux, A, B, C, X[3];
	int i, j;

	for(i = 0; i < 3; i++)
	{
		scanf("%lf", &X[i]);
	}

	for(i = 0; i < 3; i++)
	{
		for(j = i; j < 3; j++)
		{
			if(X[j] > X[i])
			{
				aux = X[i];
				X[i] = X[j];
				X[j] = aux;
			}
		}
	}

	A = X[0];
	B = X[1];
	C = X[2];

	if(A >= B + C) printf("NAO FORMA TRIANGULO\n");
	else
	{
		if((A * A) == (B * B) + (C * C)) printf("TRIANGULO RETANGULO\n");
		else if((A * A) > (B * B) + (C * C)) printf("TRIANGULO OBTUSANGULO\n");
		else printf("TRIANGULO ACUTANGULO\n");

		if(A == B && B == C) printf("TRIANGULO EQUILATERO\n");
		else if(A == B || A == C || B == C) printf("TRIANGULO ISOSCELES\n");
	}
 
    return 0;
}