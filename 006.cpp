#include <iostream>
#include <string>

using namespace std;

struct Alumno {
    string nombre;
    int notas[3];
};

int main(){
  //estudiante 1
    Alumno estudiante1;
    estudiante1.nombre = "David";
    estudiante1.notas[0] = 44;
    estudiante1.notas[1] = 48;
    estudiante1.notas[2] = 41;

    Alumno* ptr1 = &estudiante1;

    cout << "Datos del estudiante 1 " << endl;
    cout << "Nombre : " << ptr1->nombre << endl;
    cout << "Notas del estudiante : ";
    for(int i = 0; i < 3; i++){
        cout << ptr1->notas[i] << "\t";
    }
    cout << endl;
    //estudiante 2 
    Alumno estudiante2;
    estudiante2.nombre = "Julian";
    estudiante2.notas[0] = 33;
    estudiante2.notas[1] = 35;
    estudiante2.notas[2] = 31;

    Alumno* ptr2 = &estudiante2;

    cout << "Datos del estudiante 2 " << endl;
    cout << "Nombre : " << ptr2->nombre << endl;
    cout << "Notas del estudiante : ";
    for(int i = 0; i < 3; i++){
        cout << ptr2->notas[i] << "\t";
    }
    cout << endl;
    //estudiante 3
    Alumno estudiante3;
    estudiante3.nombre = "Juan";
    estudiante3.notas[0] = 37;
    estudiante3.notas[1] = 35;
    estudiante3.notas[2] = 42;

    Alumno* ptr3 = &estudiante3;

    cout << "Datos del estudiante 3 " << endl;
    cout << "Nombre : " << ptr3->nombre << endl;
    cout << "Notas del estudiante : ";
    for(int i = 0; i < 3; i++){
        cout << ptr3->notas[i] << "\t";
    }
    cout << endl;

    return 0;
}
