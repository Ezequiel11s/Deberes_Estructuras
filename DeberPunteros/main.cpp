#include "SumaControlador.h"
#include "SumarModelo.h"
#include "SumaVista.h"

int main() {
    SumarModelo modelo;
    SumaVista vista;
    SumaControlador controlador(&modelo, &vista);
    controlador.run();
    return 0;
}