#include <iostream>
#include <math.h>

using namespace std;
class Punto
{
public:
    int x,y;

};

class Vector {
public:
    Punto inicio,fin;
};

void imprimir(const Vector *v){
    cout << "(" << v->inicio.x << "," << v->inicio.y << ") -> (" << v->fin.x << "," << v->fin.y << ")" << endl;
}

float modulo(const Vector *v){
    int y1 = v->fin.x - v->inicio.x;
    int y2 = v->fin.y - v->inicio.y;
    int y3 = y2 + y1;
    float modulo = sqrt(y3);
    return modulo;
}



int main()
{
    Vector v;
    int l;
    cout << "ingrese el tamaño del arreglo : ";
    cin >> l;
    Vector arr[4+l];
    for(int i=0;i<l;i++){
        cin >> arr->inicio.x;
        cin >> arr->fin.x;
        cin >> arr->inicio.y;
        cin >> arr->fin.y;
        cout << modulo(arr[i]) << endl;
    }
    v.inicio.x = 1;
    v.inicio.y = 2;
    v.fin.x = 12;
    v.fin.y = 31;
    Vector *ptrV = &v;
    imprimir(ptrV);
    cout << modulo(ptrV) < endl;

    return 0;
}
