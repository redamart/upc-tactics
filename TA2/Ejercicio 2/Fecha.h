//
// Created by Renzo on 8/09/2017.
//

#ifndef UNTITLED_FECHA_H
#define UNTITLED_FECHA_H

using namespace std;
#include <string>
    class Fecha{
    private:
        short dia;
        string mes;
        int anno;
    public:
        short getDia();
        string getMes();
        int getAnno();

        Fecha(short,string,int);
        void setDia(short);
        void setMes(string);
        void setAnno(int);
        void mostrarFecha();
    };



#endif //UNTITLED_FECHA_H
