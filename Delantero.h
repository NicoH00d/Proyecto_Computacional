#ifndef DELANTERO_H
#define DELANTERO_H
#include "Jugador.h"
#include <iostream>
using namespace std;

class Delantero: public Jugador{
    private:
        int tiro;
    public:
        Delantero(string _nombre, string _posicion, string _pais, string _liga, int _tiro):
        Jugador(_nombre, _posicion, _pais, _liga ){
            tiro=_tiro;
        }
        int getTiro(){
            return tiro;
        }
        void tirar(){
            cout<<"Remate";
        }
};
#endif