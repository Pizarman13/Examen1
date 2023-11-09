//
// Created by Diego on 09/11/2023.
//

#ifndef EXAMEN1_ESTUDIANTE_H
#define EXAMEN1_ESTUDIANTE_H

#include <iostream>
#include <string>
#include <vector>

class Estudiante {
    std::string nombre;
    int edad;
    std::string grado;
    // Añadir un vector de materias
    std::vector<std::string> materias;

public:
    void setNombre(const std::string &nombre);
    std::string getNombre();
    void setEdad(int edad);
    int getEdad();
    void setGrado(const std::string &grado);
    std::string getGrado();
    void mostrar_info();
    // Añadir un metodo para registrar materias
    void registrar_materia (std::string materia) {
        materias.push_back(materia);
    }
    // Añadir un metodo para mostrar materias
    void mostrar_materias() {
        std::cout << "Materias: " << std::endl;
        for (const auto& materia : materias) {
            std::cout << materia << " ";
        }
        std::cout << std::endl;
    }
};


#endif //EXAMEN1_ESTUDIANTE_H
