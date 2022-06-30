#include <iostream>
#include <stdlib.h> // para rand
#include <time.h>
using namespace std;

int main(){
	srand(time(NULL)); // para generar numeros randoms a probar
	int N, M;
	cin >> N >> M;
	float matrix[N][M];
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			matrix[i][j] = (rand() % 10) - 5; // simplemente rellena con numeros al azar para probar
			cout << matrix[i][j] << " "; // para mostrar los valores de la matriz
		}
		cout << endl; // para que quede bonito :)
	}
	
	// Pos de yetas
	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if (matrix[i][j] < 0){ // si encuentra un yeta, es decir menor a 0 imprime
				cout << "Yeta en [" << i << "][" << j << "]" << endl;
			}
		}
	}
	
	// Tension total
	
	float total = 0;
	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if (matrix[i][j] > 0){ // sumatoria de todo lo positivo
				total+= matrix[i][j];
			}
		}
	}
	
	cout << "Total de tension: " << total << endl;
	
	// Mas tension
	
	float max = matrix[0][0]; // para tener un valor de referencia a contar
	int i_max = 0; // posicion en i a mostrar
	int j_max = 0; // posicion en j a mostrar
	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if (matrix[i][j] > max){ // si encuentra uno con mayor actualiza valores
				max = matrix[i][j];
				i_max = i;
				j_max = j;
			}
		}
	}
	
	cout << "Mas tension en [" << i_max << "][" << j_max  << "]" << endl;
	
	// Mas yeta
	
	float min = matrix[0][0]; // para tener un valor de referencia a contar
	int i_min = 0; // posicion en i a mostrar
	int j_min = 0; // posicion en j a mostrar
	
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if (matrix[i][j] < min){ // si encuentra uno con mayor actualiza valores
				min = matrix[i][j];
				i_min = i;
				j_min = j;
			}
		}
	}
	
	cout << "Mas yeta en [" << i_min << "][" << j_min  << "]" << endl;
	
	return 0;
}