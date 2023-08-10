#include <stdio.h>
#include <stdlib.h>

int main() {
double numl, num2;
printf("lngrese el primer número: ");
if (scanf("%lf", &numl) != 1){
printf("Error. Ingrese un numero real válido.\n");
return 1;
}
printf("lngrese el segundo número:");
if (scanf("%lf", &numl) != 1) {
printf("Error. Ingrese un numero real válido.\n");
return 1;
}

double sum = numl + num2;
double resta = numl - num2;
double multiplicacion = numl * num2;

if (num2 == 0) {
printf("Error: No se puede dividir entre cero.\n");
return 1;
}

double division = numl / num2;

printf("\nResultados:\n");
printf("Suma: %.4lf\n", sum);
printf("Resta: %.4lf\n", resta);
printf("Multiplicacion: %.4lf\n", multiplicacion);
printf("Division: %.4lf\n", division);

}