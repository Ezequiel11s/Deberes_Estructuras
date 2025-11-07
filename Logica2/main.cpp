#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Ingrese el tamano del arreglo:"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Ingrese los elementos del arreglo:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Elemento "<<i+1<<": ";
        cin>>*(arr+i);
    }
auto Promedio=[&](int *a,int tam)->float{
    float suma=0;
    for(int i=0;i<tam;i++){
        suma+=*(a+i);
    }
    return (float)suma/tam;
};
auto Maximo=[&](int *a,int tam)->int{
    int max=*(a);
    for(int i=1;i<tam;i++){
        if(*(a+i)>max){
            max=*(a+i);
        }
    }
    return max;
};
auto Minimo=[&](int *a,int tam)->int{
    int min=*(a);
    for(int i=1;i<tam;i++){
        if(*(a+i)<min){
            min=*(a+i);
        }
    }
    return min;
};
    cout<<"El promedio es: "<<Promedio(arr,n)<<endl;
    cout<<"El valor maximo es: "<<Maximo(arr,n)<<endl;
    cout<<"El valor minimo es: "<<Minimo(arr,n)<<endl;
    return 0;
}   