#include<string>
#include<vector>
#ifndef CLUB_H
#define CLUB_H

class Club{
    private:
        vector<Jugador*> jugadores;
        string paiss;
        string alineacion;
        int presupuesto;
    public:

        //constructor
        Club(){
            paiss="Inglaterra";
            alineacion="4 3 3";
            presupuesto=0;
        }
        //---jugadores---//
        vector<Jugador*>getJugadores(){
            return jugadores;
        }
        //getters       
        string getPaiss(){
            return paiss;
        }
        string getAlineacion(){
            return alineacion;
        }
        int getPresupuesto(){
            return presupuesto;
        }
        //Setters
        void setPaiss(string country){
            paiss=country;
        }
        void setAlineacion(string ali){
            alineacion=ali;
        } 
        void setPresupuesto(int presu){
            presupuesto=presu;
        }      
        //metodos
        void imprimedatos(){
            cout<<"--DATOS DEL CLUB--"<<endl;
            cout<<"Pais: "<< paiss <<endl;
            cout<<"Alineación preferida: "<< alineacion <<endl;
            cout<<"Presupuesto: "<<presupuesto<<endl;  
        }
        void agregarJugador(Jugador* juga){
            jugadores.push_back(juga);
        }         
        void imprimemas(){
            for(int i=0; i<jugadores.size();i++){
                jugadores[i]->imprimemas();
            }
        }
};
#endif