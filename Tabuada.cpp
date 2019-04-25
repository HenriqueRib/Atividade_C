#include <stdio.h>
#include <stdlib.h>
system("pause"); 
int main()
{
	int j,i,d;
	printf("Digite um numero para saber sua tabuada:\n");
	scanf ("%d", &d);
	if (d==1){
		printf("sim");
	}else{
		printf("nao");
	}
	for (i=0;i<=10;i++){
		printf("\n");
		j = d * i ;
		printf("%d X %d = %d", d,i,j); 
		
	}
	system("pause"); 
	return 0 ;
}
