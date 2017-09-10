#include <string>
#include <iostream>
#include <utility>
#include "Profesor.h"
#include "Fecha.h"
#include "Monitor.h"

using namespace std;

int main()
{
    //Fecha
    Fecha *ayer = new Fecha(8,"agosto",2017);
    Fecha hoy(9,"agosto",2017);
    hoy.setMes("Noviembre");
    hoy.mostrarFecha();
    ayer->mostrarFecha();
    //Profesor
    Profesor Ricardo("Valenzuela",32,83727833);
    Ricardo.mostrarDatos();
    Profesor *David = new Profesor("Hugo",43,243245325);
    David->mostrarDatos();
    //Monitor
    Monitor X45;
    X45.setFeatures("Samsung",120,1080);
    Monitor *V234 = new Monitor();
    V234->setFeatures("LG",60,1440);
    X45.showFeatures();
    V234->showFeatures();

    system("pause");
    return 0;
}

