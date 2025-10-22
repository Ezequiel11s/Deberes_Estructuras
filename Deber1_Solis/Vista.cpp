// Vista.cpp
#include "Vista.h"
#include <iostream>
using namespace std;
Fraccion Vista::pedirFraccion(const char* nombre) {
    int num, den;
    cout << "Ingrese numerador de " << nombre << ": ";
    cin >> num;
    cout << "Ingrese denominador de " << nombre << ": ";
    cin >> den;
    return Fraccion(num, den);
}

void Vista::mostrarResultado(const Fraccion& resultado) {
    cout << "Resultado: " << resultado.getNumerador()
              << "/" << resultado.getDenominador() <<endl;
}
