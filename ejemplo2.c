#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char nombre[50];
	printf("Introduce tu nombre: \n");
	scanf("%s", nombre);

	printf("Tu nombre es: %s\n", nombre);
	
	return 0;
}