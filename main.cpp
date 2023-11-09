//
// Created by Diego on 09/11/2023.
//

#include <iostream>
#include "Estudiante.h"

// Funcion sumar
int sumar(int a, int b) {
    return a + b;
}

// Funcion punteros
void cambio(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5, b = 6;

    // Imprimir la suma de a y b
    std::cout << "La suma de " << a << " y " << b << " es: " << sumar(a, b)  << std::endl;

    // Crear un objeto de tipo Estudiante
    Estudiante est1;

    // Establecer el nombre, edad y grado del estudiante
    est1.setNombre("Diego");
    est1.setEdad(19);
    est1.setGrado("Ingenieria Informatica");

    // Mostrar los detalles del estudiante
    est1.mostrar_info();

    int x = 0, y = 1;

    // Imprimir los valores de x y y antes del cambio
    std::cout << "Antes del cambio" << "x = " << x << ", y = " << y << std::endl;

    // Cambiar los valores de x y y
    cambio(&x, &y);

    // Imprimir los valores de x y y despues del cambio
    std::cout << "Despues del cambio" << "x = " << x << ", y = " << y << std::endl;

    return 0;
}
