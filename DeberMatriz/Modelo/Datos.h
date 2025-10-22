#ifndef DATOS_H
#define DATOS_H

class Datos{
private:
int filas;
int columnas;
int **matriz;

public:
Datos(int filas, int columnas);
void segmentar();
void encerrar();
void ingresarDatos();
static void multiplicarMatrices(Datos *m1,Datos *m2,Datos *resultado);
void imprimirMatriz();
void liberarMemoria();
~Datos();
};
#endif //DATOS_H