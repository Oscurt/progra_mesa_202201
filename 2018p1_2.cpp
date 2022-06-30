#include <iostream>
using namespace std;

int getBest(int d, int v){
	int i = 1; // para ir sacando multiplos
	while(true){ // infinito pues no se sabe cuanto andara
		int aux = d*i; // saca multiplo actual
		if (aux % v == 0) return aux/v; // si es divisible exacto retorna
		i++; // si no avanza el multiplo
	}
}

int main(){
	int d;
	cin >> d;
	cout << getBest(10, 2) << " " << getBest(10, 3) << " " << getBest(10, 5) << endl;
	return 0;
}