#ifndef FRACCION_H_INCLUDED
#define FRACCION_H_INCLUDED

#include <iostream>
using namespace std;

class Fraccion {
private:
    int numerador;
    int denominador;

public:
    Fraccion() {
        numerador = 0;
        denominador = 1;
    }

    Fraccion(int n, int d) {
        numerador = n;
        denominador = (d != 0) ? d : 1;
    }

    void setNumerador(int n) { numerador = n; }
    void setDenominador(int d) { if (d != 0) denominador = d; }


    int getNumerador() {
         return numerador;
         }

    int getDenominador() {
        return denominador;
        }

    void mostrar() {
        cout << numerador << "/" << denominador << endl;
    }
   Fraccion multiplicar(Fraccion otra) {
    int nuevoNumerador = this->numerador * otra.getNumerador();

    int nuevoDenominador = this->denominador * otra.getDenominador();


    return Fraccion(nuevoNumerador, nuevoDenominador);
}

};

#endif
