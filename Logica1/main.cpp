#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int* numeros = new int[n]{10, 3, 5, 1, 9, 2, 8, 4, 6, 7};

    cout << "Arreglo original: ";
    for (int i = 0; i < n; i++)
        cout << *(numeros + i) << " ";
    cout << endl;

    auto menor = [](int a, int b) {
        return a < b;
    };

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (!menor(*(numeros + j), *(numeros + j + 1))) {
                int temp = *(numeros + j);
                *(numeros + j) = *(numeros + j + 1);
                *(numeros + j + 1) = temp;
            }
        }
    }
    cout << "Orden ascendente: ";
    for (int i = 0; i < n; i++)
        cout << *(numeros + i) << " ";
    cout << endl;

    auto mayor = [](int a, int b) {
        return a > b;
    };

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (!mayor(*(numeros + j), *(numeros + j + 1))) {
                int temp = *(numeros + j);
                *(numeros + j) = *(numeros + j + 1);
                *(numeros + j + 1) = temp;
            }
        }
    }

    cout << "Orden descendente: ";
    for (int i = 0; i < n; i++)
        cout << *(numeros + i) << " ";
    cout << endl;

    int suma = 0;
    auto sumar = [&](int* arr, int tam) {
        for (int i = 0; i < tam; i++)
            suma += *(arr + i);
    };
    sumar(numeros, n);
    cout << "Suma total: " << suma << endl;

auto sumarImpares = [&](int* arr, int tam) {
        int sumaImpares = 0;
        for (int i = 0; i < tam; i++) {
            if (*(arr + i) % 2 != 0)
                sumaImpares += *(arr + i);
        }
        return sumaImpares;
    };
    cout << "Suma de impares: " << sumarImpares(numeros, n) << endl;
auto sumarPares = [&](int* arr, int tam) {
        int sumaPares = 0;
        for (int i = 0; i < tam; i++) {
            if (*(arr + i) % 2 == 0)
                sumaPares += *(arr + i);
        }
        return sumaPares;
    };
    cout << "Suma de pares: " << sumarPares(numeros, n) << endl;
    return 0;
}
