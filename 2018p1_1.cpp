#include <iostream>
using namespace std;

int fibo(int n){ // recursivo
	if (n == 0 || n == 1) return 1;
	return fibo(n-1) + fibo(n-2);
}

int fibo2(int n){ // iterativo
	int fib[3] = {1,1,2}; // f(k-2), f(k-1), f(k)
	if (n <= 2) return fib[n]; // si es uno de los valores iniciales del arreglo lo devuelve
	for(int i=2;i<n;i++){ // si es k >= 3 entra aca y mueve las posiciones.
		fib[0] = fib[1]; 
		fib[1] = fib[2];
		fib[2] = fib[1] + fib[0];
	}
	return fib[2]; // el ultimo siempre es el calculado mas recientemente
}

int techo(float n){
	int aux = n; // trunca el numero al ser cambio de float a int
	if (aux == n) return aux; // si son iguales se devuelve el mismo pues es el mas cercano
	return aux + 1; // si no sumas 1.
}

int main(){
	int n, m;
	cin >> n >> m;
	cout << techo(n*m*fibo2(5)) << endl;
	return 0;
}