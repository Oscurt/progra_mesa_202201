#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    int N = 20;
    int matrix[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if (i == j){ // si es el mismo no puede tener empatia
                matrix[i][j] = 0;
            }
            else if (i > j){ // si es mayor el i, quiere decir que ya existe empatia desde i hacia j, por ende solo copiamos el valor
                matrix[i][j] = matrix[j][i];
            } else{
                matrix[i][j] = rand() % 101; // si no es la primera vez que se genera la empatia
            }
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int max = matrix[0][0];
    int imax = 0;
    int jmax = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
                imax = i;
                jmax = j;
            }
        }
    }

    cout << "El maximo es: " << max << " en la posicion [" << imax << "][" << jmax << "]" << endl;


    int min = 101; // solo se llega hasta 100 por enunciado
    int imin = 0;
    int jmin = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(matrix[i][j] != 0 && matrix[i][j] < min){
                min = matrix[i][j];
                imin = i;
                jmin = j;
            }
        }
    }

    cout << "El minimo es: " << min << " en la posicion [" << imin << "][" << jmin << "]" << endl;

    float promedio = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if (matrix[i][j] != 0){
                promedio += matrix[i][j];
            }
        }
    }

    promedio = promedio / (N*N);

    cout << "El promedio es: " << promedio << endl;

    return 0;
}