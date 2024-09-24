#include <iostream>

//Se crea la clase "Perro"
class Perro{
//Se crean los atributos de los objetos de la clase "Perro"
  private:
    std::string nombre, raza;
//Se crean los metodos de los objetos de la clase "Perro"
  public:
    Perro(std::string, std::string);
//Se crea el metodo destructor "~Perro"
    ~Perro();
    void mostrarDatos();
    void jugar();
};