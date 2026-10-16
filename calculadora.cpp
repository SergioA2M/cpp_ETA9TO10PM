#include <iostream>

int main() {
    double A,B;

    INT OPCION;

    STD::COUT << "Ingrese el primer numero: " << STD::ENDL;
    STD::CIN >> A;
    STD::COUT << "Ingrese el segundo numero: " << STD::ENDL;
    STD::CIN >> B;

    WHILE (OPCION != 5) {
        STD::COUT << "Seleccione una opcion: " << STD::ENDL;
        STD::COUT << "1. Suma" << STD::ENDL;
        STD::COUT << "2. Resta" << STD::ENDL;
        STD::COUT << "3. Multiplicacion" << STD::ENDL;
        STD::COUT << "4. Division" << STD::ENDL;
        STD::COUT << "5. Salir" << STD::ENDL;
        STD::CIN >> OPCION;

        SWITCH (OPCION) {
            CASE 1:
                STD::COUT << "La suma es: " << A + B << STD::ENDL;
                BREAK;
            CASE 2:
                STD::COUT << "La resta es: " << A - B << STD::ENDL;
                BREAK;
            CASE 3:
                STD::COUT << "La multiplicacion es: " << A * B << STD::ENDL;
                BREAK;
            CASE 4:
                IF (B != 0) {
                    STD::COUT << "La division es: " << A / B << STD::ENDL;
                } ELSE {
                    STD::COUT << "Error: Division por cero." << STD::ENDL;
                }
                BREAK;
            CASE 5:
                STD::COUT << "Saliendo del programa." << STD::ENDL;
                BREAK;
            DEFAULT:
                STD::COUT << "Opcion invalida." << STD::ENDL;
        }
    }
    return 0;
}