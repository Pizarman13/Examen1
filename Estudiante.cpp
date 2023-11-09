//
// Created by Diego on 09/11/2023.
//

#include "Estudiante.h"
#include <iostream>

void Estudiante::setNombre(const std::string &nombre) {
    this->nombre = nombre;
}

std::string Estudiante::getNombre() {
    return nombre;
}

void Estudiante::setEdad(int edad) {
    this->edad = edad;
}

int Estudiante::getEdad() {
    return edad;
}

void Estudiante::setGrado(const std::string &grado) {
    this->grado = grado;
}

std::string Estudiante::getGrado() {
    return grado;
}

void Estudiante::mostrar_info() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Grado: " << grado << std::endl;
}


