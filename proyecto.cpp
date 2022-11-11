#include<iostream>
using namespace std;

#include "Jugador.h"
#include "Estadio.h"
#include "Club.h"
 
int main(){

    Jugador messi;
    messi.setNombre("Leonel Messi");
    messi.setPosicion("delantero");
    messi.setPais("Argentina");
    messi.setMedia(93);
    messi.setTiro(90);
    messi.setRegate(95);
    messi.setFuerza(70);

    messi.imprimedatos();
    cout<<"--------------------------------"<<endl;
//-------------------------------------------------//
    Estadio edefault;
    edefault.imprimedatos();
    //return 0;
    cout<<"--------------------------------"<<endl;
//-------------------------------------------------//
    Club miclub;

    miclub.setNombrec("HOOD'S FC");
    miclub.setNombrecreador("Nico");
    miclub.setPaiss("Mexico");
    miclub.setAlineacion("4 4 2");

    miclub.imprimedatos();
    return 0;
}