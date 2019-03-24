#include <stdio.h>

int multiplica(int a, int b);

int main(){
int a, b, resultado=1;
	printf("Introduce dos numeros:");
	scanf("%d", &a);
	scanf("%d", &b);
	resultado=multiplica(a,b);
	printf("El resultado es:%d\n", resultado);
return 0;
}

int multiplica(int a, int b){
int i;
int suma=0;
	for(i=1; i<=b; i++){
		suma=suma+a;
	}
return suma;
}
