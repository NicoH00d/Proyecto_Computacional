#ifndef DEFENSA_H
#define DEFENSA_H
#include "Jugador.h"
#include <iostream>
using namespace std;

class Defensa: public Jugador{
    private:
        int fuerza;
    public:
        Defensa(string _nombre, string _posicion, string _pais, string _liga, int _fuerza):
        Jugador(_nombre, _posicion, _pais, _liga ){
            fuerza=_fuerza;
        }
        int getFuerza(){
            return fuerza;
        }
        void defiende(){
            cout<<"Entrada";
        }
};
#endif