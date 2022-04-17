/*
 ============================================================================
 Name        : Tp1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int calculoDescuentoDebito();


int main(void) {
	setbuf(stdout,NULL);
	int opcion;
	float cantidadKms;
	float precioLatam;
	float precioAerolineas;


	do {
		system("cls");
		printf("1) Ingresar kilometros: \n");
		printf("2) Ingrese precio de vueltos: \n");
		printf("3) Calcular todos los costos\n");
		printf("4) Informar resultados\n");
		printf("5) Carga forzada de datos\n");
		printf("6) Salir\n");
		scanf("%d", &opcion);

		switch(opcion)
		{
		case 1:
			printf("Ingrese kms\n");
			fflush(stdin);
			scanf("%f ", &cantidadKms);

			if(cantidadKms>0)
			{
				printf("La cantidad de Kms es: %2.f", cantidadKms);
			}
			else
			{
				printf("Datos no validos, vuelva a ingresar: \n");
			}
			getch();
			break;
		case 2:
			printf("Ingrese precio latam: ");
			fflush(stdin);
			scanf("%f ", &precioLatam);
			printf("Ingrese precio aerolinea");
			fflush(stdin);
			scanf("%f", &precioAerolineas);

			break;
		case 3:
			printf("Los costos con tarjeta de debito son de: %.2f");
			printf("Los costos con tarjeta de credito son de: %.2f");
			printf("Los costos con BTC son de: %.2f");
			printf("El precio por Km es de: %.2f");
			printf("La diferencia de precio ingresada es de: %.2f");


			break;
		case 4:
			printf("Latam\n");
			printf("Precio con tarjeta de debito: \n" ), precioDebitoLatam;
			printf("Precio con tarjeta de credito: \n" );
			printf("Precio con tarjeta de bitcoin: \n" );
			printf("Precio con tarjeta de unitario: \n" );
			printf("Aerolineas\n");
			printf("Precio con tarjeta de debito: \n" );
			printf("Precio con tarjeta de credito: \n" );
			printf("Precio con tarjeta de bitcoin: \n" );

printf("Precio con tarjeta de unitario: \n");
			break;
		case 5:
			break;
		case 6:
			printf("Salir");
			break;
		default:
			printf("OPCION INCORRECTA");
		}
	}while(opcion != 6);

	return 0;
}

int calculoDescuentoDebito(float precioLatam, float precioAerolineas)
{
	float descuentoLatam;
	float descuentoAerolineas;
	float precioDebitoLatam;
	float precioDebitoAerolineas;

	descuentoLatam = precioLatam*10/100;
	descuentoAerolineas = precioAerolineas*10/100;

	precioDebitoLatam = precioLatam-descuentoLatam;
	precioDebitoAerolineas = precioAerolineas-descuentoAerolineas;

}
