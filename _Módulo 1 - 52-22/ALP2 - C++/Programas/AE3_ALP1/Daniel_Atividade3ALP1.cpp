#include<stdio.h>

int main(int argc, char** argv) {
	{
	int i, gado, par, impar;
	par=1;
	impar=1;
	int vetPasto1[42];
	int vetPasto2[42];
	for( i = 0 ; i <= 42; i++)
	  {
		printf ("digite numero do gado\n");
		scanf("%d", &gado);
		if (num % 2 == 0) {
			vetPasto1[par] = gado;
			par=par++;
		}
		else
		{
			vetPasto2[impar] = gado;
			impar=impar++;
		}
	  }
    printf("\nPasto 1\n");
	for(i = 0 ; i <= 42; i++)
	{
		printf("%d, ", vetpar[i]);
    }

	printf("\nPasto 2\n");
	for( i = 0 ; i <= 42; i++)
	{
  		printf("%d, ", vetimpar[i]);
	}
	  getch();
	  return 0;
}
}
