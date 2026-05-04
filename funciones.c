#include <stdio.h>
#include <string.h>
#include "funciones.h"

void ingresarDatos(char nombres[MAX][50], float precios[MAX], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nombre del producto %d: ", i + 1);
        scanf("%s", nombres[i]);
        printf("Precio de %s: ", nombres[i]);
        scanf("%f", &precios[i]);
    }
}

float calcularTotal(float precios[MAX], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += precios[i];
    }
    return suma;
}

void encontrarExtremos(char nombres[MAX][50], float precios[MAX], int n) {
    int IndiceCaro = 0, IndiceBarato = 0;
    for (int i = 1; i < n; i++) {
        if (precios[i] > precios[IndiceCaro]) IndiceCaro = i;
        if (precios[i] < precios[IndiceBarato]) IndiceBarato = i;
    }
    printf("El mas caro es: %s ($%.2f)\n", nombres[IndiceCaro], precios[IndiceCaro]);
    printf("El mas barato es: %s ($%.2f)\n", nombres[IndiceBarato], precios[IndiceBarato]);
}

float calcularPromedio(float precios[MAX], int n) {
    return calcularTotal(precios, n) / n;
}

void buscarProducto(char nombres[MAX][50], float precios[MAX], int n) {
    char destino[50];
    int encontrado = 0;
    printf("Ingrese el nombre a buscar: ");
    scanf("%s", destino);

    for (int i = 0; i < n; i++) {
        if (strcmp(nombres[i], destino) == 0) {
            printf("El precio de %s es: $%.2f\n", nombres[i], precios[i]);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) printf("Producto no encontrado.\n");
}