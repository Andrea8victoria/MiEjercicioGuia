#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char peticion[100];
	char respuesta[100];
	
	strcpy (peticion, "Laura/12/Miguel/47/Mario/20/Juan/34");
	//Resultado: "Laura*12-Miguel*47-Mario*20-Juan*34"
	
	char nombre[20];
	int edad;
	char *p = strtok(peticion, "/");
	
	//Eliminar menores de edad
	while(p!=NULL)
	{
		strcpy (nombre, p);
		p=strtok(NULL, "/");
		edad=atoi(p);
		if(edad> 18)
			sprintf(respuesta, "%s%s*%d-", respuesta, nombre, edad);
		p=strtok(NULL,"/");
	}
	respuesta [strlen(respuesta) -1]= '\0';
	printf("Respultado: %s\n", respuesta);
}
