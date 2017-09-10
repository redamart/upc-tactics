//
// Created by Renzo on 9/09/2017.
//

#ifndef UNTITLED_CLASSES_H
#define UNTITLED_CLASSES_H
# include <cmath>
#include <iostream>
#include <string>


using namespace std;
//2.1
class Arma {
private:
    int balas;
public:
    void setBalas(int);
    int getBalas();
    void disparar();
    void recargar();
};
void Arma::setBalas(int balas) {this->balas=balas;}
int Arma::getBalas() {return this->balas;}
//2.2
class Coordenada{
private:
    int x1;
    int y1;
    int x2;
    int y2;
public:
    void setCoordenadas(int,int,int, int);
    void calcularDistancias();
    int getX1();
    int getX2();
};
int Coordenada::getX1() { return this->x1;}
int Coordenada::getX2() { return this->x2;}
void Coordenada::setCoordenadas(int x1, int y1, int x2, int y2) {
    this->x1=x1;
    this->y1=y1;
    this->x2=x2;
    this->y2=y2;
}
void Coordenada::calcularDistancias() {
    double distancia = sqrt((x2 - x1)*(x2 - x1 ) + (y2 - y1)*(y2 - y1));
    cout<< "La distancia entre los dos puntos es: " << distancia << endl;
}
//2.3
class Parqueo{
private:
    int horaE;
    int horaS;
public:
    void setHoraE(int);
    void setHoraS (int);
    int calculoPago{};
};
void Parqueo::setHoraE(int HoraE) {this->horaE=horaE;}
void Parqueo::setHoraS(int HoraS) {this->horaS=horaS;}
int Parqueo::calculoPago(){
    int cont=0;
    int precioTotal;
    if ((horaE % 100) != 0) { cont++; }
    if ((horaS % 100) != 0) { cont++; }
    if (horaS > horaE) {	cont = cont + (((horaS - (horaS % 100)) - (horaE - (horaE % 100))) / 100);	}
    else if(horaE>horaS){ cont = cont + (((horaE - (horaE % 100)) - (horaS - (horaS % 100))) / 100); }
    precioTotal = ((cont - 1) * 6) + 10;
    return precioTotal;
}
//2.4
class Alumno{
private:
    int codigoCurso;
    std::string nombre;
    int c1, c2, c3;

public:
    Alumno(std::string,int);
    void setCalifications(int,int,int);
    void showFinals();
};
Alumno::Alumno(std::string nombre,int codigoCurso) {
    this->nombre=nombre;
    this->codigoCurso=codigoCurso;
}
void Alumno::setCalifications(int c1, int c2, int c3)  {
    this->c1=c1;
    this->c2=c2;
    this->c3=c3;
}
void Alumno::showFinals() {
    int promedio;
    promedio=((c1+c2+c3)/3);
    if (promedio>=12.5){
        cout<<"Alumno: " << Alumno<< endl;
        cout<<"Codigo del curso: " << codigoCurso << endl;
        cout<<"El alumno aprobo :)"<<endl;
    }
    else {
        cout<<"Alumno: " << Alumno<< endl;
        cout<<"Codigo del curso: " << codigoCurso << endl;
        cout<<"El alumno DESAPROBO :´v"<<endl;
    }
}
#endif //UNTITLED_CLASSES_H