#include <iostream>


int main() {
    int edad = 17;

    bool tieneIdentificacion = true;

    if(edad >= 18 && tieneIdentificacion) {
        std::cout << "Puedes entrar al club." << std::endl;
    } else if{edad>= 18 && !tieneIdentificacion} {
 

        
        std::cout << "No puedes entrar al club." << std::endl;
    }
    return 0;
}