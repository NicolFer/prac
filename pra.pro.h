class Persona{
    protected:
        string nombre;
        int edad;

    public:
        Persona(string n, int e):nombre(n),edad(p){}
        string getNombre() const;
        void setNombre(string n);
        int getEdad() const;
        void setEdad(int e);
        void print() const;
};