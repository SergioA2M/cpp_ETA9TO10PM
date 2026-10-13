#include <iostream>

int main() {
    int edad = 17;

    double num1;
    double num2;
    std::cout << "Ingresa el primer número: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo número: ";
    std::cin >> num2;

    std::cout << "La suma es: " << num1 + num2 << std::endl;
    std::cout << "La resta es: " << num1 - num2 << std::endl;
    std::cout << "La multiplicación es: " << num1 * num2 << std::endl;
    if (num2 != 0) { 
        std::cout << "La división es: " << num1 / num2 << std::endl;
    } else {
        std::cout << "No se puede dividir entre cero." << std::endl;
    }
    
    return 0;
}