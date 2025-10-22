/***********************************************************************
 * Module:  SumarModelo.h
 * Author:  USUARIO
 * Modified: martes, 21 de octubre de 2025 18:13:14
 * Purpose: Declaration of the class SumarModelo
 ***********************************************************************/

#if !defined(__punteros_SumarModelo_h)
#define __punteros_SumarModelo_h

class SumarModelo
{
public:
   void setValores(int a, int b);
   void sumar();
   int getResultado()const;
   SumarModelo();        
   ~SumarModelo();       

private:
   int* pA;
   int* pB;
   int* resultado;


};

#endif