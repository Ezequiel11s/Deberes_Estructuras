#pragma once
#include "Fraccion.h"
template <typename T>
class IFraccion
{
    public:

      virtual Fraccion<T> getFraccionInput(const char* label) = 0;
    virtual void mostrarResultado(const Fraccion<T>& resultado) = 0;
    virtual ~IFraccion() = default;
};
