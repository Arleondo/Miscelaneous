#include <iostream>
using namespace std;

int main(){
    //Variables
    int nro;
    int factor = 0;
    int factorizar = 1;
    int factormin = 0;
    int factormax = 0;
    //char continua;
    char continua = 's';


    //Ingreso de datos



    do {
        cout <<"Desea ingresar un número entero positivo para factorizar  (s/S - n/N):  ";
        cin >> continua;

        cout <<"Ingrese el número a factorizar: ";
        cin >> nro;



        if(nro >= 0){
            //factorizar
            for (int i=1; i<=nro; i++){
                factorizar *= i;
            }


            //busca el máximo y el mínimo
            if (factorizar > factormax){
                factormax = factorizar;
            } else if (factorizar < factormin){
                factormin = factorizar;
            }


            //nostrar el resultado
            cout <<"El resultado de !"<< nro <<" es: " << factorizar << endl;

        } else if (nro == 0){
            cout << "El resultado de !0 es: 1" << endl;
            //return (0);
        }
        else
            cout << "Número inválido, intente nuevamente" << endl;



    } while (continua == 's' || continua == 'S');


    if (continua == 'n' || continua == 'N'){
        //mostrar maximo y minimo
        cout << "El número mas chico obtenido es: "<<factormin << endl;
        cout << "El número mas alto obtenido es: "<<factormax << endl;
    }


    //mostrar maximo y minimo
    //getch ();
    return 0;
}