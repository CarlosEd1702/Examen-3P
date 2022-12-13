// Leer 8 números, almacenarlos en un vector y determinar en qué posiciones
//se encuentra el número con mayor cantidad de dígitos pares. Utilizar
//funciones con punteros.
//

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int Vector[8];
    int i;
    srand(time(0));

    for (i = 0; i < 8; i++) {
        Vector[i] = 100 + rand() % 2500;
    }
    for (i = 0; i < 8; i++) {
        cout << Vector[i] << " ";
    }cout << endl << endl;

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
