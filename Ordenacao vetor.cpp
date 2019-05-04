#include <stdio.h>
#include <stdlib.h>

main()
{
	int vetorA[10];
	int i,j, troca;
	// Aqui ja declaramos as variaveis e entrará num loop de repetição
	for (i=0;i<10;i++)
	{
		printf("Digite o %d elemento: ", i);
		scanf("%d", &vetorA[i]);
	}
	for (i=0; i<9; i++)
	   {
			for (j=i+1; j<10;j++)
			{
				if (vetorA[i] > vetorA[j])
				{
					troca = vetorA[i];
					vetorA[i] = vetorA[j];
					vetorA[j] = troca ;
				}
			}
	   }
	printf ("\n Vetor ordenado e \n");
	for (i=0;i<10; i++)
		{
			printf("%d - ", vetorA[i]);
		}
		system("pause"); 
	return (0);
}
