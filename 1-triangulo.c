#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i, a, b, c, x;
	
	printf("Deteccion de tipo de triangulos (por lados).\n\n");
	
	for(i=0; i<3; i++){
		
		printf("Ingresa el lado %i: ", i+1);
		scanf("%i%*c", &x);
		
		if (i==0){
			a = x;
		}else if(i==1){
			b = x;
		}else{	
			c = x;
		}
	}
	
	if(a==b && a==c){ // Todos los lados iguales
		printf("Su triangulo es equilatero.\n");
	}else if( (a==b && a!=c) || (a==c && a!=b) || (b==c && a!=b)){ // Dos lados iguales
		printf("Su triangulo es isosceles.\n");
	}else{ // Todos los lados direntes
		printf("Su triangulo es rectangulo.\n");
	}
	
	system("pause");
	return 0;
}
