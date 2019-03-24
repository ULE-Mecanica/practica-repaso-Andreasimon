#include <stdio.h>

int factorial();

int main(){
int variable;
	printf("Introduce un numero: ");
	scanf("%d", &variable);
	factorial(variable);

printf("\n");
return 0;
}

int factorial(){
int i, fact=1, n;
	for(i=1; i<=n; i++){
		fact*=i;
		printf("El factorial de %d es %d", n, fact);
	}
return fact;
}
