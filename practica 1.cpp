
#include <stdio.h> //libreria estandar de entradas y salidas de datos
#include  <stdlib.h> //libreria estandar 
#include  <conio.h> // libreia de conexion de entradas y salidas 

//variables globales 
int numero1,numero2,resta,suma,multiplicacio;
float division;

int main()
{ //inicio
// entrada de datos
system("cls"); //limpiar la pantalla

printf("*** Programa ejemplo calculadora ****");
printf(" Ingresa el 1er Numero: ");
scanf("%i",&numero1);

printf(" Ingresa el 2do Numero: ");
scanf("%i",&numero2);

//proceso de datos
suma=numero1 + numero2;

//salida de datos

printf(" La suma de los numeros es: %i ", suma);

return 0;
}
