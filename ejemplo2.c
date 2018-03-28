#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char nombre[50];
	int edad;

	printf("Introduce tu nombre: \n");
	scanf("%s", nombre);

	printf("Tu nombre es: %s\n", nombre);

	printf("Introduce tu edad: \n");
	scanf("%d", &edad);

	printf("Tu edad es: %d\n", edad);
	
	return 0;
}