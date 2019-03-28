#include <stdio.h>
#include <stdlib.h>

enum TRaza{Orco, Humano, Mago, Enano, Elfo}
char Nombres[6][15]={"Merodeador", "Rompehuesos", "Algoritmico", "Proscripto", "Cruzamontañas"}
char Apellidos[6][10]={"Furioso", "Mistico", "Peregrino", "Galactico", "Sabio"}
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
void cargarcaract(struct TCaracteristicas * CaracPers);
void mostrarcaract(struct TCaracteristicas * CaracPers);
int main(void){
	return 0;
}

void cargarcaract(struct TCaracteristicas * CaracPers){
	CaracPers->velocidad = rand()%10 + 1;
	CaracPers->destreza = rand()%5 + 1;
	CaracPers->fuerza = rand()%10 + 1;
	CaracPers->Nivel = rand()%10 + 1;
	CaracPers->Armadura = rand()%10 + 1;
}
void mostrarcaract(struct TCaracteristicas * CaracPers){
	printf("Velocidad: %d\n", CaracPers->velocidad);
	printf("Destreza: %d\n", CaracPers->destreza);
	printf("Fuerza: %d\n", CaracPers->fuerza);
	printf("Nivel: %d\n", CaracPers->Nivel);
	printf("Armadura: %d\n", CaracPers->Armadura);
}