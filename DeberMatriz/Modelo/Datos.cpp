#include "Datos.h"
#include <iostream>
using namespace std;
Datos::Datos(int filas, int columnas){
    this->filas = filas;
    this->columnas = columnas;
    this->matriz=nullptr;
}
    void Datos::segmentar(){
      matriz=new int*[filas];
      for(int i=0;i<filas;i++){
        *(matriz+i)=new int[columnas];
      }
    }
    void Datos::encerrar(){
for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
        *(*(matriz+i)+j)=0;
    }
}
    }
    void Datos::ingresarDatos(){
        cout<<"Ingrese los datos de la matriz de"<<filas<<"x"<<columnas<<endl;
        for(int i=0;i<filas;i++){
            for(int j=0;j<columnas;j++){
                cout<<"Elemento["<<i<<"]["<<j<<"]:";
                cin>>*(*(matriz+i)+j);
            }
        }
    }
void Datos::multiplicarMatrices(Datos* m1, Datos* m2, Datos* resultado) {
    for (int i = 0; i < m1->filas; i++) {
        for (int j = 0; j < m2->columnas; j++) {
            *(*(resultado->matriz + i) + j) = 0;  // Inicializa celda
            for (int k = 0; k < m1->columnas; k++) {
                *(*(resultado->matriz + i) + j) +=
                    *(*(m1->matriz + i) + k) * *(*(m2->matriz + k) + j);
            }
        }
    }
}
void Datos::imprimirMatriz(){
     cout << filas << "x" << columnas << "):\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << *(*(matriz + i) + j) << "\t";
        }
        cout << endl;
    }
}
void Datos::liberarMemoria(){
    if(matriz!=nullptr){
    for(int i=0;i<filas;i++){
        delete[]*(matriz+i);
    }
    delete[]matriz;
    matriz=nullptr;
    }
}
Datos::~Datos(){
    liberarMemoria();
}
