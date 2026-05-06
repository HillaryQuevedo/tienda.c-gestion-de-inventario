#ifndef FUNCIONES_H
#define FUNCIONES_H

// Definimos el máximo de productos
#define MAX 10

// Prototipos de funciones
void ingresarDatos(char nombres[MAX][50], float precios[MAX], int n);
float calcularTotal(float precios[MAX], int n);
void encontrarExtremos(char nombres[MAX][50], float precios[MAX], int n);
float calcularPromedio(float precios[MAX], int n);
void buscarProducto(char nombres[MAX][50], float precios[MAX], int n);

#endif
