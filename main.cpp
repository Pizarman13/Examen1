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

// Excepciones
void dividir(int a, int b) {
    if (b == 0) {
        throw "No se puede dividir entre 0";
    }
    std::cout << "El resultado de la division es: " << a / b << std::endl;
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

    // Excepciones
    try {
        dividir(9, 0);
        } catch (const char* e) {
        std::cout << "Se produjo un error: " << e << std::endl;
    }

    // Registrar materias
    est1.registrar_materia("Programacion");

    // Mostrar materias
    est1.mostrar_materias();

    // Registrar más materias
    est1.registrar_materia("Matematicas");
    est1.registrar_materia("Fisica");

    est1.mostrar_materias();

    return 0;
}
