//
// Created by Renzo on 8/09/2017.
//

#include "Fecha.h"
#include <iostream>


Fecha::Fecha(short dia,string mes,int anno){
    this->dia=dia;
    this->mes=mes;
    this->anno=anno;

}
short Fecha::getDia() { return dia;}
string Fecha::getMes() {return mes;}
int Fecha::getAnno() { return anno;}
void Fecha::setDia(short dia){ this->dia=dia; }
void Fecha::setMes(string mes){ this->mes= std::move(mes); }
void Fecha::setAnno(int anno){ this->anno=anno; }
void Fecha::mostrarFecha() {
    cout << "La fecha de hoy es: " << dia << " de " << mes << " del " << anno<< endl ;
}
