#include <stdio.h>
 
int main() {
	double i, j = 2, S = 1;

	for(i = 3; i <= 39; i += 2)
	{
		S = S + (i / j);
		j *= 2;
	}

	printf("%.2lf\n", S);
 
    return 0;
}