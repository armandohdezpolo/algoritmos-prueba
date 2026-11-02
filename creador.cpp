#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
 * ./ejecutable [num_repeticiones]
 */

int main(int argc, char* argv[]) {
    // Inicializamos la semilla para números aleatorios
    srand(time(nullptr));

    // Nombre del fichero de salida
    string nombreFichero = "entrada_datos.txt";
    ofstream f(nombreFichero, ios::out);


    int num_repeticiones = atoi(argv[1]);

    for(int i = 0; i < num_repeticiones; i++) {
        // Generamos un número aleatorio de caracteres entre 0 y 8
        // rand() % 9 genera un número entre 0 y 8 (ambos inclusive)
        int longitud = rand() % 9;

        // Bucle para escribir los 'longitud' caracteres
        for(int j = 0; j < longitud; j++) {
            int a = rand() % 2; // 0 o 1
            if(a == 0){
                f << "j";
            } else {
                f << "g";
            }
        }
        // Añadimos el salto de línea al final de cada cadena
        f << "\n";
    }

    f.close();
    return 0;
}
