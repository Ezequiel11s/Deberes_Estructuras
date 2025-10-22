#ifndef FRACCION_H
#define FRACCION_H
template <typename T>
class Fraccion
{
    private:
        T numerador;
        T denominador;
    public:
        Fraccion(T num = 0, T den = 1);
    T getNumerador() const;
    T getDenominador() const;

        Fraccion<T>multiplicar(const Fraccion<T>&otra)const;


};
#endif // FRACCION_H
