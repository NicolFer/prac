#include <iostream>
#include <array>
#include "practicacasita.h"
using namespace std;
int main(){
    Persona* personas = new Persona[10]{
        personas[0] = Persona("pedrito",13),
        personas[1] = Persona("pedrito",13),
        personas[2] = Persona("pedrito",13),
        personas[3] = Persona("pedrito",13),
        personas[4] = Persona("pedrito",13),
        personas[5] = Persona("pedrito",13),
        personas[6] = Persona("pedrito",13),
        personas[7] = Persona("pedrito",13),
        personas[8] = Persona("pedrito",13),
        personas[9] = Persona("pedrito",13)
    };
    delete[] personas;

    return 0;
}