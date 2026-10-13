#include <iostream>
#include <string>

int main() {
    int x; //      Numeros enteros, osea que 

    std::string nombre;
    int edad;

    std::cout << "escribe tu nombre: "<< std::endl;
    std::cin >> nombre;
    std::cout << "escribe tu edad: " << std::endl;
    std::cin >> edad;
    std::cout << "hola" << nombre << " tienes " << edad << " años" << std::endl;
    return 0;

}