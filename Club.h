#include<string>

class Club{
    private:
        string nombrec;
        string nombrecreador;
        string paiss;
        string alineacion;
    public:
        //constructor
        Club(){
            nombrec="Sin Definir FC";
            nombrecreador="Sin Definir";
            paiss="Inglaterra";
            alineacion="4 3 3";
        }
        //getters
        string getNombrec(){
            return nombrec;
        }
        string getNombrecreador(){
            return nombrecreador;
        }        
        string getPaiss(){
            return paiss;
        }
        string getAlineacion(){
            return alineacion;
        }
        //Setters
        void setNombrec(string nombr){
            nombrec=nombr;
        }
        void setNombrecreador(string nombrecrea){
            nombrecreador=nombrecrea;
        }
        void setPaiss(string country){
            paiss=country;
        }
        void setAlineacion(string ali){
            alineacion=ali;
        }       
        //metodos
        void imprimedatos(){
            cout<<"--DATOS DEL CLUB--"<<endl;
            cout<<"Nombre: "<< nombrec <<endl;
            cout<<"Creador: "<< nombrecreador <<endl;
            cout<<"Pais: "<< paiss <<endl;
            cout<<"Alineación preferida: "<< alineacion <<endl;
        } 
};