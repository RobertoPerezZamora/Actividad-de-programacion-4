/*************************************************************

NOMBRE: Roberto perez Zamora
FECHA: 09/02/24
PROGRAMA: Actividad de programacion - 4.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Solicitar al usuario un valor, y la serie debe llegar a un valor igual o menor al indicado por el usuario

El usuario va a elegir con qué ciclo debe trabajar
El programa debe salir cuando el usuario lo indique


*************************************************************/

// Bibliotecas
// Incluir biblioteca estandar
#include <iostream>

// Inicio de la función principal
int main()
{   
    //Declarar la variable entero
    int flag = 1;
    
    while(flag == 1)
    {
            // Declarar la variable num
    int num;
    
    // Solicitar un número al usuario
    std::cout << "Ingresar un numero: ";
    std::cin >> num;

    // Mostrar las opciones de ciclo
    std::cout << "Choose a loop type:\n";
    std::cout << "1. for loop\n";
    std::cout << "2. while loop\n";
    std::cout << "3. do-while loop\n";
    std :: cout << "4. Salir\n";

    // Solicitar la opción al usuario
    int choice;
    // Guardar la opción en la variable choice
    std::cin >> choice;



    // Declarar las variables para la serie de Fibonacci
    int a = 0, b = 1, c, d = 4;


    switch (choice)
    {
        // Fibonacci usando for
        case 1:
            std::cout << "Serie Fibonacci ejecutando for:\n";
            for (int i = 0; i <= num; ++i) {
                std::cout << a << " ";
                c = a + b;
                a = b;
                b = c;
            }
            break;

        // Fibonacci usando bucle while
        case 2:
            std::cout << "Serie Fibonacci ejecutando bucle while:\n";
            while (a <= num) {
                std::cout << a << " ";
                c = a + b;
                a = b;
                b = c;
            }
            break;

        // Fibonacci usando bucle do-while
        case 3:
            std::cout << "Serie Fibonacci ejecutando bucle do-while:\n";
            do {
                std::cout << a << " ";
                c = a + b;
                a = b;
                b = c;
            } while (a <= num);
            break;
        
        // Salir del programa
        case 4:
            std::cout << "Saliendo del programa...\n";
            break;
        
        // Opción por defecto si el usuario elige una opción no válida
        default:
            std::cout << "Opcion Invalida\n";
            break;
        
    }
    //Preguntar si desea continuar
    std::cout << "Desea continuar? 1. Si 2. No\n";
    std::cin >> flag;
    }
    

    
    //Regresar 0
    return 0;
    //Fin del programa
}
