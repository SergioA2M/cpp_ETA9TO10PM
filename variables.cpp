#include <iostream>
#include <string>

int main() {
 int x; //      Numeros enteros, osea que 
 int edad = 20;

 float altura = 1.75; // Tiene pocos decimales (3.33)
 double peso =  98.6; // Tiene mas decimales (3.333333)

 char letra = 'A'; //permite guardar caracteres individuales
 std::string nombre = "oscar"; // permite guardar cadena de caracteres

 bool activo = true;  // guarda valores true or false (booleanos)

 std::cout << edad <<","<<nombre <<","<< altura <<","<< peso;
 return 0;

}