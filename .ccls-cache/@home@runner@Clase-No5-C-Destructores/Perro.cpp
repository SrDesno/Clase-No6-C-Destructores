#include <iostream>
#include "Perro.h"

//llamado al metodo Constructor "Perro" de la clase "Perro"
Perro::Perro(std::string _nombre, std::string _raza){
  nombre=_nombre;
  raza=_raza;
}

//llamado al metodo Destructor de "~Perro" de la clase "Perro"
Perro::~Perro(){
}

//llamado al metodo "mostrarDatos" de la clase "Perro"
void Perro::mostrarDatos(){
  std::cout<<"Nombre: "<<nombre<<std::endl;
  std::cout<<"Raza: "<<raza<<std::endl;
}

//llamado al metodo "jugar" de la clase "Perro"
void Perro::jugar(){
  std::cout<<"El perro "<<nombre<<" esta jugando"<<std::endl;
}