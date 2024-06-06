#include <iostream>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;
public:
    Persona (string n, int e) : nombre (n), edad(e) {}
    void Persona::Persona(string n, int e){} 
    std::string getNombre()const;
    void setNombre (std::string n) ;
    int getEdad() const;
    void setEdad(int e);
    void print()const;
};