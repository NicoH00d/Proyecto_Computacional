#include <string>

class Ultimate{
    private:
    string nombredelclub;
    string nombrecreador;

    public:
    Ultimate (){
        nombredelclub="Sin definir";
        nombrecreador="sin definir";
    }
    string getNombredelclub(){
        return nombredelclub;
    }
    string getNombrecreador(){
        return nombrecreador;
    }
    void setNombredelclub(string nombreclub){
        nombredelclub=nombreclub;
    }
    void setNombrecreador(string creador){
        nombrecreador= creador;
    }
    void imprimedatos(){
        cout<<"Nombre del club: "<<nombredelclub<<endl;
        cout<<"Creador: "<<nombrecreador<<endl;
    }

};