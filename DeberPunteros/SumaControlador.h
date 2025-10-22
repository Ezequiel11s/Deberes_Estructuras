/***********************************************************************
 * Module:  SumaContolador.h
 * Author:  USUARIO
 * Modified: martes, 21 de octubre de 2025 18:16:31
 * Purpose: Declaration of the class SumaContolador
 ***********************************************************************/

#if !defined(__punteros_SumaControlador_h)
#define __punteros_SumaControlador_h

class SumarModelo;
class SumaVista;

#include "SumarModelo.h"
#include "SumaVista.h"

class SumaControlador
{
public:
   void run();
   SumaControlador(SumarModelo* m, SumaVista* v);

private:
   SumarModelo* modelo;
   SumaVista* vista;


};

#endif