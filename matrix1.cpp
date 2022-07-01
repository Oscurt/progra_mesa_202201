#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    int N = 16, M = 11;
    bool estacionamiento[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            estacionamiento[i][j] = rand() % 2; // da un 0 o 1 al azar
            cout << estacionamiento[i][j] << " ";
        }
        cout << endl;
    }

    // aca empieza el ejericio

    int total_ocupados = 0; // cuantos lugares estan ocupados

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(estacionamiento[i][j] == true){ // si es 1 o true esta usado
                total_ocupados++;
            }
        }
    }

    cout << "Total de estacionamientos ocupados: " << total_ocupados << endl;
    // el (float) es para que se muestre el decimal
    float porcentaje_no_ocupados = (float) (M*N - total_ocupados) / (float) (M*N) * 100; // calcula el porcentaje de lugares no ocupados

    cout << "Porcentaje de estacionamientos no ocupados: " << porcentaje_no_ocupados << endl; 

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(estacionamiento[i][j] == false){ // si es 0 o false esta libre
                cout << "Esta libre la pos [" << i << "][" << j << "]" << endl;
            }
        }
    }

    return 0;
}