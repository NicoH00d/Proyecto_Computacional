#include<string>

class Club{
    private:
        //string nombrec;
        //string nombrecreador;
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
};