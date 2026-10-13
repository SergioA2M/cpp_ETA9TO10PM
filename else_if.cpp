#include <iostream>

int main()
{ 
    double calificacion;

    bool opcion = true;


    std::cout << "Ingresa tu calificacion: ";
    std::cin >> calificacion;

    if (opcion)
        {
            std::cout << "Tu calificacion es: " << calificacion << std::endl;
        }
        else
        {
            std::cout << "No se mostrara tu calificacion" << std::endl;
        }

        if (calificacion >= 90)
        {
            std::cout << "Excelente" << std::endl;
        }
        else if (calificacion >= 80)
        {
            std::cout << "muy bien" << std::endl;
        }
        else if (calificacion >= 70)
        {
            std::cout << "Aprobado" << std::endl;
        }
   
    else
        {
            std::cout << "Reprobado" << std::endl;
        }
    return 0;

    // /**/ 
}