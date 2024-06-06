#include <iostream>
using namespace std;

class Persona{
private:
    string nombre;
    int edad;

public:
    Persona():nombre(""),edad(0){}
    Persona(string n, int e):nombre(n),edad(e){}
    string getNombre() const { 
        return nombre; 
        }
    int getEdad() const { 
        return edad; 
        }
    void setNombre(string n) { 
        nombre = n; 
        }
    void setEdad(int e) { 
        edad = e; 
        }
    void print() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;//imprimimos informacion de cada persona de la clase
    }
};