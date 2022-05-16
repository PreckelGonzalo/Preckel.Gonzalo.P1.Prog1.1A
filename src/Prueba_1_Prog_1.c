/*
 ============================================================================
 Name        : Prueba_1_Prog_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



float aplicarAumento(float precio);

typedef struct{
	int id;
	char nombre[20];
	char tipo;
	float efectividad;
}eVacuna;

int main(void) {

	setbuf(stdout, NULL);
	float precioMain;
	float precioFinal;
	char palabraMain[20];



	printf("Escriba un nombre");
	fflush(stdin);
	gets(palabraMain);

	printf("Precio Main: \n");
	scanf("%f", &precioMain);


	precioFinal = aplicarAumento(precioMain);


	return EXIT_SUCCESS;
}



float aplicarAumento(float precio)
{
    float precioFinal;
    float interes = 0.05;

    precioFinal = precio + (precio * interes);



    return precioFinal;
}



int reemplazarCaracter(char palabra[20], char A, char B)
{
	int contadorVocales = 0;
	for(int i = 0; i < strlen(palabra);i++)
	{
		if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u'
				|| palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'I' || palabra[i] == 'O' || palabra[i] == 'U')
		{
			contadorVocales++;
		}
	}

	return contadorVocales;
}

int ordenarTipos(eVacuna* pListaVacuna, int tam, int cant)
{
	int retorno = -1;
	eVacuna aux;
	int contador = -1;
	int idVacuna = 0;

		int ids[5] = {1,2,3,4,5,};
		char nombre[6][51] = {"Martin", "Christian", "German", "Mauricio", "Octavio"};
		char tipo[6][7] = {"H", "F", "C", "C", "F"};


		if(pListaVacuna != NULL && tam > 0 && cant > 0 && cant <=tam)
		{
			contador = 1;
			for(int i = 0; i < cant; i++)
			{

				pListaVacuna[idVacuna].id = ids[i];
				strcpy(pListaVacuna[idVacuna].nombre, nombre[i]);
				pListaVacuna[idVacuna].tipo = tipo[i];

				contador++;
			}
		}
		if(pListaVacuna != NULL && tam > 0)
		{
				for(int i = 0; i < tam-1; i++)
				{
					for(int j = i+1; j < tam; j++)
					{
						if((pListaVacuna[i].tipo / pListaVacuna[j].tipo)>=0 || (pListaVacuna[i].tipo / pListaVacuna[j].tipo)== 0)
						{
							aux = pListaVacuna[i];
							pListaVacuna[i] = pListaVacuna[j];
							pListaVacuna[j] = aux;
							retorno = 0;

						}
					}//FOR J
				}//FOR I
				return retorno;
		}
return retorno;
}


