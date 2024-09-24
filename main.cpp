#include <iostream>
#pragma once
#include "Perro.h"

int main() {
  //Se crean los objetos "perro1" de la clase "Perro"
  Perro perro1=Perro("Fido","Doberman");

  //Se muestran los objetos que pasaron por los metodos de la clase "Perro"
  perro1.mostrarDatos();
  perro1.jugar();
  //Se llama al metodo Destructor "~Perro" de la clase "Perro"
  perro1.~Perro();

return 0;
}