// Fraccion.h
#ifndef FRACCION_H
#define FRACCION_H

class Fraccion {
private:
    int numerador;
    int denominador;

public:
    Fraccion(int numerador,int denominador);
    int getNumerador() const;
    int getDenominador() const;
    Fraccion multiplicar(const Fraccion& otra) const;
};

#endif
