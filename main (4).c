#include <stdio.h>
#include "funciones.h"

int main() {
    char nombres[MAX][50];
    float precios[MAX];
    int cantidad;

    printf("--- GESTION DE INVENTARIO ---\n");
    printf("Cuantos productos desea ingresar (max 10)? ");
    scanf("%d", &cantidad);

    if (cantidad > MAX) cantidad = MAX;

    ingresarDatos(nombres, precios, cantidad);

    printf("\n--- RESULTADOS ---\n");
    printf("Precio Total: $%.2f\n", calcularTotal(precios, cantidad));
    printf("Precio Promedio: $%.2f\n", calcularPromedio(precios, cantidad));
    
    encontrarExtremos(nombres, precios, cantidad);
    
    printf("\n--- BUSQUEDA ---\n");
    buscarProducto(nombres, precios, cantidad);

    return 0;
}
