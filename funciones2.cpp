#include <iostream>
using namespace std;

bool esPrimo(int numero){ // FUNCION QUE VERIFICA SI UN NUMERO ES PRIMO
	int contador = 0;
	for(int i=1;i<=numero;i++){
		if (numero%i == 0){ // EN CASO DE QUE TENGA DIVISOR EXACTO EL CONTADOR AUMENTA EN 1
			contador++;
		}
	}
	if (contador == 2){ // SI ESTE ES 2 QUIERE DECIR QUE FUE DIVIDIDO POR 1 Y POR SI MISMO POR LO TANTO ES PRIMO
		return true;
	}
	return false;
}

void Goldbach(int numero){
	for(int i=2;i<=numero;i++){ // PARTIMOS DESDE 2 PUES ES EL PRIMER PRIMO
		if(esPrimo(i)){ // REVISA SI EL NUMERO I ES PRIMO
			for(int j=2;j<=i;j++){ // SI LO ES BUSCAREMOS PRIMOS MENORES O IGUALES A I
				if(esPrimo(j) && numero==i+j){ // SI J ES PRIMO Y ADEMAS I+J ES IGUAL AL NUMERO CUMPLE LA CONJETURA
					cout << numero << " = " << i << " + " << j << endl;
				}
			}
		}
	}
}

int main(){
	
	int numero;
	cout << "INGRESE NUMERO PAR MAYOR QUE 2: "; cin >> numero;
	if (numero%2 == 0 && numero > 2){ // VERIFICAR LA CONDICION DE LA CONJETURA
	Goldbach(numero); // LLAMA A LA FUNCION GOLDBACH
	}
	
	return 0;
}
