    #include "Fraccion.h"
    #include "Interfaz.h"

template <typename T>
    class Contolador
    {
        public:
              Contolador(IFraccion<T>*v) : vis(v) {}

        void run() {
            Fraccion<T> f1 = vis->getFraccionInput("Fracción 1");
            Fraccion<T> f2 = vis->getFraccionInput("Fracción 2");
            Fraccion<T> resultado = f1.multiplicar(f2);
            vis->mostrarResultado(resultado);
        }


        private:
            IFraccion<T>*vis;

    };
template class Contolador<int>;
template class Contolador<float>;
template class Contolador<double>;
