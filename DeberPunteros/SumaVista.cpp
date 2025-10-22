/***********************************************************************
 * Module:  SumaVista.cpp
 * Author:  USUARIO
 * Modified: martes, 21 de octubre de 2025 18:16:09
 * Purpose: Implementation of the class SumaVista
 ***********************************************************************/

#include "SumaVista.h"
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       SumaVista::ingresar()
// Purpose:    Implementation of SumaVista::ingresar()
// Return:     pair<int,int>
////////////////////////////////////////////////////////////////////////

std::pair<int,int> SumaVista::ingresar()
{
    int a, b;
   cout << "Ingrese el primer valor: ";
   cin >> a;
   cout << "Ingrese el segundo valor: ";
   cin >> b;
   return {a, b};
   }

////////////////////////////////////////////////////////////////////////
// Name:       SumaVista::mostrar(int res)
// Purpose:    Implementation of SumaVista::mostrar()
// Parameters:
// - res
// Return:     void
////////////////////////////////////////////////////////////////////////

void SumaVista::mostrar(int res)
{
   cout << "El resultado de la suma es: " << res << endl;
}