/***********************************************************************
 * Module:  SumaVista.h
 * Author:  USUARIO
 * Modified: martes, 21 de octubre de 2025 18:16:09
 * Purpose: Declaration of the class SumaVista
 ***********************************************************************/

#if !defined(__punteros_SumaVista_h)
#define __punteros_SumaVista_h
using namespace std;
#pragma once
#include <utility>
class SumaVista
{
public:
   std::pair<int,int> ingresar();
   void mostrar(int res);

};

#endif