#include "C:\Users\USUARIO\Documents\Tercer semestre\Estucturas_De_Datos\Deber_1.2\include\Interfaz.h"
#include <iostream>
using namespace std;
template <typename T>
class Vista : public IFraccion<T>{
public:
Fraccion<T> getFraccionInput(const char* label)
override{
T numerador,denominador;
cout<<"Ingrese el numerado: "<<endl;
cin>>numerador;
cout<<"Ingrese el denominador: "<<endl;
cin>>denominador;
return Fraccion<T>(numerador,denominador);
}

void mostrarResultado(const Fraccion<T>& resultado)
override{
cout<<"El Resultado es: "<<resultado.getNumerador()<<"/"<<resultado.getDenominador()<<endl;
}
} ;
template class Vista<int>;
template class Vista<float>;
template class Vista<double>;

