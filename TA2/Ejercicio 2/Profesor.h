//
// Created by Renzo on 8/09/2017.
//
#include <string>
#ifndef UNTITLED_PROFESOR_H
#define UNTITLED_PROFESOR_H



class Profesor {
private:
    std::string apellido;
    int edad;
    int codigo;
public:
    Profesor(std::string,int,int);
    void setApellido (std::string);
    void setCodigo(int);
    void setEdad (int);
    std::string getApellido();
    int getEdad();
    int getCodigo();
    void mostrarDatos();
};



#endif //UNTITLED_PROFESOR_H
