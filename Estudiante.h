//
// Created by Diego on 09/11/2023.
//

#ifndef EXAMEN1_ESTUDIANTE_H
#define EXAMEN1_ESTUDIANTE_H

#include <iostream>
#include <string>

class Estudiante {
    std::string nombre;
    int edad;
    std::string grado;

public:
    void setNombre(const std::string &nombre);
    std::string getNombre();
    void setEdad(int edad);
    int getEdad();
    void setGrado(const std::string &grado);
    std::string getGrado();
    void mostrar_info();
};


#endif //EXAMEN1_ESTUDIANTE_H
