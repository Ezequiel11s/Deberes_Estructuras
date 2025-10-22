#include "Datos.h"
#include <iostream>
using namespace std;

Datos::Datos(int filas, int columnas, int profundidad) {
    this->filas = filas;
    this->columnas = columnas;
    this->profundidad = profundidad;
    this->matriz = nullptr;
}

void Datos::segmentar() {
    matriz = new int**[profundidad];
    for (int p = 0; p < profundidad; p++) {
        *(matriz + p) = new int*[filas];
        for (int i = 0; i < filas; i++) {
            *(*(matriz + p) + i) = new int[columnas];
        }
    }
}

void Datos::encerrar() {
    for (int p = 0; p < profundidad; p++) {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                *(*(*(matriz + p) + i) + j) = 0;
            }
        }
    }
}

void Datos::ingresarDatos() {
    cout << "Ingrese los datos de la matriz de tamaño "
         << filas << "x" << columnas << "x" << profundidad << endl;
    for (int p = 0; p < profundidad; p++) {
        cout << "Capa " << p << ":" << endl;
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                cout << "Elemento[" << i << "][" << j << "][" <<]()
