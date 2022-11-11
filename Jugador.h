#include <string>

class Jugador{
    private:
        string nombre;
        string posicion;
        string pais;
        int media;
        int tiro;
        int regate;
        int fuerza;

    public:
        //constructor
        Jugador(){
            nombre="No definido";
            posicion="No definido";
            pais="No definido";
            media=0;
            tiro=0;
            regate=0;
            fuerza=0;
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
        int getMedia(){
            return media;
        }
        int getTiro(){
            return tiro;
        }
        int getRegate(){
            return regate;
        }
        int getFuerza(){
            return fuerza;
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
        void setMedia(int med){
            media=med;
        }
        void setTiro(int tir){
            tiro=tir;
        }
        void setRegate(int reg){
            regate=reg;
        }
        void setFuerza(int fuer){
            fuerza=fuer;
        }
        //metodos
        void imprimedatos(){
            cout<<"--JUGADOR ESTRELLA--"<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Posición: "<<posicion<<endl;
            cout<<"País: "<<pais<<endl;
            cout<<"  -Atributos-"<<endl;
            cout<<"-Media: "<<media<<endl;
            cout<<"-Tiro: "<<tiro<<endl;
            cout<<"-Regate: "<<regate<<endl;
            cout<<"-Fuerza: "<<fuerza<<endl;
        }


};