#include <iostream>
#include "C:\Users\USUARIO\Documents\Tercer semestre\Estucturas_De_Datos\Deber_1.2\include\Contolador.cpp"
#include "C:\Users\USUARIO\Documents\Tercer semestre\Estucturas_De_Datos\Deber_1.2\src\Vista.cpp"
using namespace std;

int main()
{
   Vista<float> vis;
    Contolador<float> contolador(&vis);
    contolador.run();

    return 0;
}
