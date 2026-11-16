#include <iostream>
#include <format>
#include <string>
#include <fstream>
using namespace std;

/*
 * GENERA ALEATORIOS ENTRE x,y,z
 * ./ejecutable [num_repeticiones]
 */


int main(int argc, char* argv[]) {
    //random = rand()%(max-min + 1) + min;
    srand(time(nullptr));

    ofstream w("salida.txt");

    int min = 0, max = 3;
    int aleatorio;

    //NUMERO DE CADENAS
    for(int j=0; j<atoi(argv[1]);j++){

        //LONGITUD DE CADENA: ALEATORIA
        for(int i=0; i<(rand()%(15-0)+0);i++){
            aleatorio = rand()%(max-min)+min;
            if(aleatorio == 0){
                //Escribe x
                w << "x";
            }else if(aleatorio == 1){
                //Escribe y
                w << "y";
            }else{
                //Escribe z
                w << "z";
            }
        }
        w << "\n";
    }
    w.close();
}
