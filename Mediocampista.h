#ifndef MEDIOCAMPISTA_H
#define MEDIOCAMPISTA_H
#include "Jugador.h"
#include <iostream>
using namespace std;

class Mediocampista: public Jugador{
    private:
        int pase;
    public:
        Mediocampista(string _nombre, string _posicion, string _pais, string _liga, int _pase):
        Jugador(_nombre, _posicion, _pais, _liga ){
            pase=_pase;
        }
        int getPase(){
            return pase;
        }
        void pases(){
            cout<<"Pase";
        }
};
#endif