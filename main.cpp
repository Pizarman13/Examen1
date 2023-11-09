//
// Created by Diego on 09/11/2023.
//

#include <iostream>

// Funcion sumar
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int a = 5, b = 6;

    // Imprimir la suma de a y b
    std::cout << "La suma de " << a << " y " << b << " es: " << sumar(a, b)  << std::endl;

    
    return 0;
}
