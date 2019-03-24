#include <stdio.h>


int main(){
int contrasena, cont=0;
	do{
	printf("Introduce la contrasena:");
	scanf("%d", &contrasena);
	if(contrasena == 4567){
		printf("Contrasena correcta\n");
	}    
	if(contrasena < 4567){
		printf("Contrasena incorrecta\n");
		printf("El numero es menor\n");
		cont++;
	}
	if(contrasena > 4567){
		printf("Contrasena incorrecta\n");
		printf("El numero es mayor\n");
		cont++;
	
	}
	}
	while(contrasena!=4567 && cont<3);
	if(cont==3){
		printf("Numero de intentos agotados");
	}
printf("\n");
return 0;
}
