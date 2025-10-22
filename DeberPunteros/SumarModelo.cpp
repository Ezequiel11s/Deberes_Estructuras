/***********************************************************************
 * Module:  SumarModelo.cpp
 * Author:  USUARIO
 * Modified: martes, 21 de octubre de 2025 18:13:14
 * Purpose: Implementation of the class SumarModelo
 ***********************************************************************/

#include "SumarModelo.h"

SumarModelo::SumarModelo() {
    pA = new int(0);
    pB = new int(0);
    resultado = new int(0);
}
SumarModelo::~SumarModelo() {
    delete pA;
    delete pB;
    delete resultado;
}

////////////////////////////////////////////////////////////////////////
// Name:       SumarModelo::setValores(int a:_, int b)
// Purpose:    Implementation of SumarModelo::setValores()
// Parameters:
// - a:_
// - b
// Return:     int
////////////////////////////////////////////////////////////////////////

void SumarModelo::setValores(int a, int b)
{
   *pA = a;
   *pB = b;
}

////////////////////////////////////////////////////////////////////////
// Name:       SumarModelo::sumar()
// Purpose:    Implementation of SumarModelo::sumar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void SumarModelo::sumar()
{
   *resultado = *pA + *pB;
}

////////////////////////////////////////////////////////////////////////
// Name:       SumarModelo::getResultado()
// Purpose:    Implementation of SumarModelo::getResultado()
// Return:     int
////////////////////////////////////////////////////////////////////////

int SumarModelo::getResultado()const
{
   return *resultado;
}