#include <iostream>
#include <string>
using namespace std;

class Persona{
public:
    Persona (int _edad, string _nombre, string _apellido){
        edad=_edad;
        nombre=_nombre;
        apellido=_apellido;
    }
    void veredad(){
        cout<<edad<<endl;
    }
    void vernombre(){
        cout<<nombre<<endl;
    }
    void verapellido(){
        cout<<apellido<<endl;
    }
    int edad;
    string nombre;
    string apellido;
};

class dni : Persona{
public:
    dni(string _calle, int _altura, int _documento, char _genero, const Persona& x) : Persona(x.edad,x.nombre,x.apellido){
        calle=_calle;
        altura=_altura;
        documento=_documento;
        genero=_genero;
    }

    void mostrardoc(){
        cout<<"El documento nro: "<<documento<<" .Pertenece a "<<nombre<<" "<<apellido<<" de "<<edad<<" años"<<endl;
        cout<<"Vive en "<<calle<<" .Altura "<<altura<<endl;
        cout<<"Es de genero "<<genero<<endl;
    }
private:
    string calle;
    int altura;
    int documento;
    char genero;
};
int main () {
    int edad; cin>>edad;
    string nombre,apellido; cin>>nombre>>apellido;
    Persona per(edad,nombre,apellido);
    string calle;   cin>>calle;
    int altura,documento;   cin>>altura>>documento;
    char genero;    cin>>genero;
    dni dni1(calle,altura,documento,genero,per);
    dni1.mostrardoc();
    return 0;
}
