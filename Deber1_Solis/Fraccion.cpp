// Fraccion.cpp
#include "Fraccion.h"

Fraccion::Fraccion(int num, int den) : numerador(num), denominador(den) {}

int Fraccion::getNumerador() const { return numerador; }
int Fraccion::getDenominador() const { return denominador; }

Fraccion Fraccion::multiplicar(const Fraccion& otra) const {
    return Fraccion(numerador * otra.numerador, denominador * otra.denominador);

}
