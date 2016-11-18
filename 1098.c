#include <stdio.h>
 
int main() {
	double a, b, X;
	int i;
	
	for(a = 0; a <= 1.9; a = a + .2)
	{
		for(b = 1.0; b <= 3.0; b++)
		{
			X = b + a;
			
			if(a == 0.0 || a == 1.0) printf("I=%.0lf J=%.0lf", a, X);
			else if(X == 3.0 || X == 4.0 || X == 5.0) printf("I=%.0lf J=%.0lf", a, X);
			else printf("I=%.1lf J=%.1lf", a, X);
			
			printf("\n");
		}
	}
	
	for(i = 3; i <= 5; i++) printf("I=2 J=%d\n", i);
 
    return 0;
}