// Controlador.cpp
#include "Contolador.h"

void Controlador::ejecutar() {
    Fraccion f1 = vista.pedirFraccion("Fraccion 1 (a/b)");
    Fraccion f2 = vista.pedirFraccion("Fraccion 2 (c/d)");
    Fraccion resultado = f1.multiplicar(f2);
    vista.mostrarResultado(resultado);
}
