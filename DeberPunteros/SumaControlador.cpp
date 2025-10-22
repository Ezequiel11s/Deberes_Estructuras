/***********************************************************************
 * Module:  SumaContolador.cpp
 * Author:  USUARIO
 * Modified: martes, 21 de octubre de 2025 18:16:31
 * Purpose: Implementation of the class SumaContolador
 ***********************************************************************/

#include "SumarModelo.h"
#include "SumaVista.h"
#include "SumaControlador.h"

////////////////////////////////////////////////////////////////////////
// Name:       SumaControlador::run()
// Purpose:    Implementation of SumaControlador::run()
// Return:     void
////////////////////////////////////////////////////////////////////////
SumaControlador::SumaControlador(SumarModelo* m, SumaVista* v) {
    modelo = m;
    vista = v;
}
void SumaControlador::run()
{
    auto valores = vista->ingresar();
    modelo->setValores(valores.first, valores.second);
    modelo->sumar();
    int res = modelo->getResultado();
    vista->mostrar(res);
}