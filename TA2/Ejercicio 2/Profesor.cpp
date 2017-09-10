//
// Created by Renzo on 8/09/2017.
//

#include "Profesor.h"

#include <utility>
#include <iostream>

Profesor::Profesor(std::string apellido,int edad,int codigo){
    this->apellido=apellido;
    this->edad= edad;
    this->codigo=codigo;
};
void Profesor::setApellido(std::string apellido) {this->apellido= apellido;}
void Profesor::setCodigo(int codigo) {this->codigo=codigo;}
void Profesor::setEdad(int edad) {this->edad=edad;}
std::string Profesor::getApellido(){return apellido;}
int Profesor::getEdad() {return edad;}
int Profesor::getCodigo() {return codigo;}
void Profesor::mostrarDatos() {std::cout << "Su apellido es: " << apellido << " y su codigo es: " << codigo << std::endl ; }
