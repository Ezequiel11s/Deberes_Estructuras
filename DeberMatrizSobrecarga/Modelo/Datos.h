#ifndef DATOS_H
#define DATOS_H
#include <iostream>
using namespace std;

template <typename T>
class Datos {
private:
    T **matriz;
    int filas, columnas;

public:
    Datos(int f, int c);
    void segmentar();
    void encerrar();
    void ingresarDatos();
    static void multiplicar(Datos<T> *m1, Datos<T> *m2, Datos<T> *resultado);
    void imprimir();
    void imprimir(const char* mensaje); // SOBRECARGA
    void liberarMemoria();
};

// Como es template, las implementaciones van aquí mismo:
template <typename T>
Datos<T>::Datos(int f, int c) : filas(f), columnas(c), matriz(nullptr) {}

template <typename T>
void Datos<T>::segmentar() {
    matriz = new T*[filas];
    for (int i = 0; i < filas; i++)
        matriz[i] = new T[columnas];
}

template <typename T>
void Datos<T>::encerrar() {
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            *(*(matriz + i) + j) = 0;
}

template <typename T>
void Datos<T>::ingresarDatos() {
    cout << "Ingrese elementos (" << filas << "x" << columnas << "):\n";
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++) {
            cout << "[" << i << "][" << j << "]: ";
            cin >> *(*(matriz + i) + j);
        }
}

template <typename T>
void Datos<T>::multiplicar(Datos<T> *m1, Datos<T> *m2, Datos<T> *resultado) {
    for (int i = 0; i < m1->filas; i++)
        for (int j = 0; j < m2->columnas; j++) {
            *(*(resultado->matriz + i) + j) = 0;
            for (int k = 0; k < m1->columnas; k++)
                *(*(resultado->matriz + i) + j) +=
                    *(*(m1->matriz + i) + k) * *(*(m2->matriz + k) + j);
        }
}

template <typename T>
void Datos<T>::imprimir() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++)
            cout << *(*(matriz + i) + j) << "\t";
        cout << endl;
    }
}

template <typename T>
void Datos<T>::imprimir(const char* mensaje) { // SOBRECARGA
    cout << mensaje << endl;
    imprimir();
}

template <typename T>
void Datos<T>::liberarMemoria() {
    for (int i = 0; i < filas; i++)
        delete[] matriz[i];
    delete[] matriz;
}

#endif
