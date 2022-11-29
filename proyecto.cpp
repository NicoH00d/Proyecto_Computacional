#include<iostream>
using namespace std;

#include "Jugador.h"
#include "Estadio.h"
#include "Club.h"
#include "Ultimate.h"
#include "Delantero.h"
#include "Mediocampista.h"
#include "Defensa.h"
 
int main(){
    string nombre_jugador;

    Ultimate equipo;

    equipo.setNombredelclub("Benito FC");
    equipo.setNombrecreador("Nico");
    equipo.imprimedatos();
    cout<<"--------------------------------"<<endl;

//jugadores
    Delantero neymar("Neymar","delantero","Brazil","Uber Eats",99);
    Mediocampista kimmich("Joshua Kimmich","Medio campo","Alemania","Bundesliga",99);
    Defensa marquez("Rafa Marquez","defensa","México","Leyenda",99);


//estadio
    Estadio edefault;
    edefault.imprimedatos();
    
    cout<<"--------------------------------"<<endl;
//club
    Club miclub;


    miclub.setPaiss("Mexico");
    miclub.setAlineacion("4 4 2");

    miclub.imprimedatos();

    miclub.agregarJugador(&neymar);
    miclub.agregarJugador(&kimmich);
    miclub.agregarJugador(&marquez);
    cout<<"Jugadores actuales: "<<endl;
    miclub.imprimemas();
    return 0;
}