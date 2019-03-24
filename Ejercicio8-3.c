#include <stdio.h>

int factorial();

int main(){
int variable, fact;
	printf("Introduce un numero: ");
	scanf("%d", &variable);
	factorial(variable);
	printf("El factorial de %d es %d", variable, fact);

printf("\n");
return 0;
}

int factorial(){
int i, fact=1, n;
	while(i>n){
		i++;
		fact*=i;
	}

return fact;
}
