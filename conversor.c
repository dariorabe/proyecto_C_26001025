#include <stdio.h>

int main() {
    int opcion;
    float cantidad;

    printf("=== Conversor de Monedas ===\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    if(opcion == 1){
	printf("Resultado: %.2f USD\n", cantidad * 0.13);
    }
    else if(opcion == 2){
        printf("Resultado: %.2f Eur\n", cantidad * 0.12);
    }
    else if(opcion == 3){
        printf("Resultado: %.2f GTQ\n", cantidad * 7.8);
    }
    else if(opcion == 4){
        printf("Resultado: %.2f GTQ\n", cantidad * 8.5);
    }
    else{
        printf("Opción no válida\n");
    }

    return 0;
}
