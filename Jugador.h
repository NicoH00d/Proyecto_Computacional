#ifndef JUGADOR_H
#define JUGADOR_H
using namespace std;
#include <iostream>

class Jugador{
    private:
        string nombre;
        string posicion;
        string pais;
        string liga;


    public:
        //constructor
        Jugador(string _nombre,string _posicion,string _pais,string _liga){
            nombre=_nombre;
            posicion=_posicion;
            pais=_pais;
            liga=_liga;

        }
        //getters
        string getNombre(){
            return nombre;
        }
        string getPosicion(){
            return posicion;
        }
        string getPais(){
            return pais;
        }
        string getLiga(){
            return liga;
        }

        //setters
        void setNombre(string nom){
            nombre=nom;
        }
        void setPosicion(string pos){
            posicion=pos;
        }
        void setPais(string pai){
            pais=pai;
        }
        void setLiga(string lig){
            liga=lig;
        }
        //metodos
        virtual void imprimemas(){
            cout<<nombre<<", "<<posicion<<", de la liga "<<liga<<endl;
        }



};
#endif