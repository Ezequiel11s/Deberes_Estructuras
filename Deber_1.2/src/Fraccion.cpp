#include "C:\Users\USUARIO\Documents\Tercer semestre\Estucturas_De_Datos\Deber_1.2\include\Fraccion.h"
#include <stdexcept>
template <typename T>
Fraccion<T>::Fraccion(T num, T den) : numerador(num), denominador(den) {}
template <typename T>
T Fraccion<T>::getNumerador() const { return numerador; }
template <typename T>
T Fraccion<T>::getDenominador() const { return denominador; }
template <typename T>
Fraccion<T> Fraccion<T>::multiplicar(const Fraccion<T>& otra) const {
return Fraccion<T>(numerador * otra.numerador, denominador * otra.denominador);
}
template class Fraccion<int>;
template class Fraccion<float>;
template class Fraccion<double>;
