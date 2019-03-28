#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum TRaza{Orco, Humano, Mago, Enano, Elfo}
char Nombres[6][10]={“ale”, “b”, “c”, “d”, “e”}
char Apellidos[6][10]={“f”, “g”, “hormiga”, “i”, “j”}

struct TDatos {
	TRaza Raza; //nota 1
	char *ApellidoNombre; //nota 2
	int edad; //entre 0 a 300
	double Salud;//100
};
struct TCaracteristicas{
	int velocidad;// 1 a 10
	int destreza; //1 a 5
	int fuerza;//1 a 10
	int Nivel; //1 a 10
	int Armadura; //1 a 10
};
struct TPersonaje {
	TDatos * DatosPersonales
	TCaracteristicas * Caracteristicas
};




void cargar_datos(struct TDatos *puntero){
	char AM[20];
	strcpy(AM, Apellidos[rand()%7]);
	strcat(AM, Nombres[rand()%7]);
	ApellidoNombre = (char*) malloc(sizeof(char) * strlenght(AM));
	strcpy(puntero->Raza, Raza[rand()%6]);
	strcpy(puntero->ApellidoNombre, AM);
	puntero->edad = rand()%300;
	puntero->Salud = 100;

}



void 	MostrarP(struct TDatos *a){
	
	printf("\n Raza: ", );
	puts(a->Raza);
	printf("\n Apellido y Nombre: ");
	puts(a->ApellidoNombre);
	printf("\n Edad: %d", a->edad);
	printf("\n Salud: %.2lf", a->Salud);

}