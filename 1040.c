#include <stdio.h>
 
int main() {
	double N1, N2, N3, N4, MEDIA, EXAME;

	scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

	N1 = N1 * 2;
	N2 = N2 * 3;
	N3 = N3 * 4;

	MEDIA = (N1 + N2 + N3 + N4) / 10;

	if(MEDIA >= 5 && MEDIA < 7)
	{
		scanf("%lf", &EXAME);
		
		printf("Media: %.1lf\n", MEDIA);
		MEDIA = (MEDIA + EXAME) / 2;

		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1lf\n", EXAME);

		if(MEDIA < 5) printf("Aluno reprovado.\n");
		else printf("Aluno aprovado.\n");

		printf("Media final: %.1lf\n", MEDIA);
	}
	else if(MEDIA < 5)
	{
		printf("Media: %.1lf\n", MEDIA);
		printf("Aluno reprovado.\n");
	}
	else
	{
		printf("Media: %.1lf\n", MEDIA);
		printf("Aluno aprovado.\n");
	}
 
    return 0;
}