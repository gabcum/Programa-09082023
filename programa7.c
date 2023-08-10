#include <stdio.h>
#include <stdlib.h>

int main() {
double numl;
double num2;
printf("lngrese el primer numero: ");
if (scanf("%lf", &numl) != 1){
printf("Error. Ingrese un numero real válido.\n");
return 1;
}
printf("lngrese el segundo numero:");
if (scanf("%lf", &num2) != 1) {
printf("Error. Ingrese un numero real válido.\n");
return 1;
}
double suma = numl + num2;
double rest = numl - num2;
double multi = numl * num2;

if (num2 == 0) {
printf("Error. No se puede dividir entre cero.\n");
return 1;
}
double div = numl / num2;

printf("\n Resultados \n:");
printf("Suma: %lf \n", suma);
printf("resta: %lf \n", rest);
printf("Multiplicacion: %lf \n", multi);
printf("Division: %lf \n", div);

}