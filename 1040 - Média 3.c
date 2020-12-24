#include <stdio.h>

int main()
{
	double x1, x2, x3, x4, media, recuperacao, mediafinal;
	scanf("%lf %lf %lf %lf", &x1, &x2, &x3, &x4);
	media = ((x1*2)+(x2*3)+(x3*4)+(x4*1))/10.0;
	if(media==7.0 || media>7.0 && media<10.1)
	{
		printf("Media: %.1f\n", media);
		printf("Aluno aprovado.\n");
	}
	else if(media>=5.0 && media<=6.9)
	{
		printf("Media: %.1f\n", media);
		printf("Aluno em exame.\n");
		scanf("%lf", &recuperacao);
		printf("Nota do exame: %.1f\n", recuperacao);
		mediafinal = (media+recuperacao)/2.0;
		if(mediafinal>=5.0)
		{
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", mediafinal);
		}
		if(mediafinal<=4.9)
		{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", mediafinal);
		}
	}
	else if(media<5.0)
	{
		printf("Media: %.1f\n", media);
		printf("Aluno reprovado.\n");
	}
	return 0;
}
