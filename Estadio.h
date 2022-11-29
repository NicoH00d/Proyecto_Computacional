#include <string>

class Estadio{
    private:
        string nombree;
        string lugar;
        int capacidad;
    public:
        //constructor
        Estadio(){
        nombree="Cancha Fut";
        lugar="Inglaterra";
        capacidad=10000;
        }
        //getters
        string getNombree(){
            return nombree;
        }
        string getLugar(){
            return lugar;
        }
        int getCapacidad(){
            return capacidad;
        }
        //setters
        void setNombree(string nomb){
            nombree=nomb;
        }
        void setLugar(string lug){
            lugar=lug;
        }
        void setCapacidad(int capaci){
            capacidad=capaci;
        }

        //metodo
        void imprimedatos(){
            cout<<"--ESTADIO--"<<endl;
            cout<<nombree<<endl;
            cout<<"lugar: "<<lugar<<endl;
            cout<<"Capacidad: "<<capacidad<<endl;            
        }

};