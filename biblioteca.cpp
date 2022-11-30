// biblioteca.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>

int main()
{
    std::string titulo[3];
    std::string autor[3];
    std::string edicion[3];
    bool libro;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Cual es el titulo?" << i + 1 << std::endl;
        std::cin >> titulo[i];
    }
    for (int j = 0; j < 3; j++)
    {
        std::cout << "Quiene es el autor del libro?" << j + 1 << std::endl;
        std::cin >> autor[j];
    }
    for (int k = 0; k < 3; k++)
    {
        std::cout << "En que fecha se publico?" << k + 1 << std::endl;
        std::cin >> edicion[k];
    }

    std::cout << "Quieres ver los datos de los libros? (1 si, 0 no)\n";
    std::cin >> libro;
    if (libro == 1)
    {
        //libro 1
        std::cout << "Titulo del libro 1 es: " << titulo[0] << std::endl;
        std::cout << "El autor del libro 1 es: " << autor[0] << std::endl;
        std::cout << "La fecha en la que se publico: " << edicion[0] << std::endl;
        std::cout << "---------------------------------------------------" << std::endl;

        //libro 2
        std::cout << "Titulo del libro 2 es: " << titulo[1] << std::endl;
        std::cout << "El autor del libro 2 es: " << autor[1] << std::endl;
        std::cout << "La fecha en la que se publico: " << edicion[1] << std::endl;
        std::cout << "---------------------------------------------------" << std::endl;

        // libro 3
        std::cout << "Titulo del libro 3 es: " << titulo[2] << std::endl;
        std::cout << "El autor del libro 3 es: " << autor[2] << std::endl;
        std::cout << "La fecha en la que se publico: " << edicion[2] << std::endl;
    }
    if (libro == 0)
    {
        std::cout << "Ta bien :c" << std::endl;
    }

}