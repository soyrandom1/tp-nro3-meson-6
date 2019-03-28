#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

enum TRaza{Orco, Humano, Mago, Enano, Elfo};
char Nombres[6][15]={"Merodeador ", "Rompehuesos ", "Algoritmico ", "Proscripto ", "Cruzamontañas "};
char Apellidos[6][10]={"Furioso ", "Mistico ", "Peregrino ", "Galactico ", "Sabio "};

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
	TDatos * DatosPersonales;
	TCaracteristicas * Caracteristicas;
};
void cargarcaract(struct TCaracteristicas * CaracPers);
void mostrarcaract(struct TCaracteristicas * CaracPers);
void cargar_datos(struct TDatos *puntero);
void mostrar_datos(struct TDatos *a);

int main(void){
	srand(time(NULL));
	struct TPersonaje * Lista;
	int cant;
	printf("Cuantos personajes desea cargar?:\n");
	scanf("%d", &cant);
	Lista = (struct TPersonaje*) malloc(sizeof(struct TPersonaje)*cant);
	for (int i = 0; i < cant; ++i)
	{
		fflush(stdin);
		cargar_datos(Lista[i].DatosPersonales);
		cargarcaract(Lista[i].Caracteristicas);
		printf("\n");
	}
	for (int i = 0; i < cant; ++i)
	{
		printf("Personaje %d:\n", (i+1));
		mostrar_datos(Lista[i].DatosPersonales);
		mostrarcaract(Lista[i].Caracteristicas);
	}
	return 0;
}

void cargarcaract(struct TCaracteristicas * CaracPers){
	CaracPers->velocidad = rand()%10 + 1;
	CaracPers->destreza = rand()%5 + 1;
	CaracPers->fuerza = rand()%10 + 1;
	CaracPers->Nivel = rand()%10 + 1;
	CaracPers->Armadura = rand()%10 + 1;
	printf("Hola\n");
}
void mostrarcaract(struct TCaracteristicas * CaracPers){
	printf("Velocidad: %d\n", CaracPers->velocidad);
	printf("Destreza: %d\n", CaracPers->destreza);
	printf("Fuerza: %d\n", CaracPers->fuerza);
	printf("Nivel: %d\n", CaracPers->Nivel);
	printf("Armadura: %d\n", CaracPers->Armadura);
}




void cargar_datos(struct TDatos *puntero){
	char AM[30];
	strcpy(AM, Apellidos[rand()%7]);
	strcat(AM, Nombres[rand()%7]);
	puntero->ApellidoNombre = (char*) malloc(sizeof(char) * strlen(AM));
	switch(rand()%5){
		case 0:
		puntero->Raza = Orco;
		break;
		case 1:
		puntero->Raza = Humano;
		break;
		case 2:
		puntero->Raza = Mago;
		break;
		case 3:
		puntero->Raza = Enano;
		break;
		case 4:
		puntero->Raza = Elfo;
		break;
	}
	strcpy(puntero->ApellidoNombre, AM);
	puts(puntero->ApellidoNombre);
	puntero->edad = rand()%301;
	puntero->Salud = 100;

}



void mostrar_datos(struct TDatos *a){
	
	printf("\n Raza: %d", a->Raza);
	printf("\n Apellido y Nombre: ");
	puts(a->ApellidoNombre);
	printf("\n Edad: %d", a->edad);
	printf("\n Salud: %.2lf", a->Salud);

}