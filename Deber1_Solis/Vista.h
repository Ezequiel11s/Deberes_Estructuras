// Vista.h
#ifndef VISTA_H
#define VISTA_H

#include "Fraccion.h"

class Vista {
public:
    void mostrarResultado(const Fraccion& resultado);
    Fraccion pedirFraccion(const char* nombre);
};

#endif
