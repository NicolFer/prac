#include <iostream>
#include <algorithm>
#include <array>
#include "practicacasita.h"
using namespace std;
/*
string getNombre() const { 
    return nombre; 
    }
int getEdad() const { 
    return edad; 
    }
void setNombre(string n) { 
    nombre = n; 
    }
void setEdad(int e) { edad = e; }
void print() const {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;//imprimimos informacion de cada persona de la clase
}*/
void imprimirpersonas(Persona* p) {
    cout << "Nombre: " << p->getNombre() << ", Edad: " << p->getEdad() << endl;
}
int main(){
    Persona* personas = new Persona[10]{
    /*Persona* personas[10]={*/
        personas[0] = Persona("pedrito",17),
        personas[1] = Persona("alverto",13),
        personas[2] = Persona("juanito",10),
        personas[3] = Persona("pepito",16),
        personas[4] = Persona("nicol",22),
        personas[5] = Persona("fernando",23),
        personas[6] = Persona("angel",19),
        personas[7] = Persona("alvaro",26),
        personas[8] = Persona("maria",50),
        personas[9] = Persona("fabricio",66)
    };
    Persona* ptr = personas + 9; // ultimo elemento del arreglo de 10 elementos
    for(int i = 9; i >= 0; --i){
        ptr->print(); //imprime el contenido de ptr 
        --ptr;//cambio de elemento en el arreglo
    }
    for(int i = 9; i >= 10; --i){
        if(i % 2 != 0){ //si el índice es impar
            ptr->print(); // imprime el elemento actual
        }
        --ptr;
    }
    for(int i = 9; i >= 0; --i){
        imprimirpersonas(ptr); //imprime el contenido de ptr con funcion imprimirpersona
        --ptr;//cambio de elemento en el arreglo
    }
/*void ordenarPorEdad(Persona* personas, int n) {
    for (int i = 0; i < n - 1; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (personas[j].getEdad() > personas[max].getEdad()) {
                max = j;
            }
        }
        if (max != i) {
            Persona temp = personas[i];
            personas[i] = personas[max];
            personas[max] = temp;
        }
    }
}
void ordenarPorNombre(Persona* personas, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (personas[j].getNombre() < personas[min].getNombre()) {
                min = j;
            }
        }
        if (min != i) {
            Persona temp = personas[i];
            personas[i] = personas[min];
            personas[min] = temp;
        }
    }
}*/
    auto compararEdad = [](Persona* a, Persona* b) {
        return a->getEdad() < b->getEdad();
    };
    sort(personas, personas + 10, compararEdad);
    for (int i = 0; i < 10; i++){
        imprimirpersonas(personas+i);
    }
    auto compararNombre = [](Persona* c, Persona* d) {
        return c->getNombre() < d->getNombre();
    };
    sort(personas, personas + 10, compararNombre);
    for (int i = 0; i < 10; i++) {
        imprimirpersonas(personas + i);
    }
    delete[] personas;//liberando memoria 

    return 0;
}