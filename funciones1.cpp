#include <iostream>
using namespace std;

int sumaDivisores(int numero){ // FUNCION QUE SUMA TODOS LOS DIVISORES DE UN NUMERO
	int sum=0; // DEBE PARTIR EN 0 DE LO CONTRARIOR PODRIA TENER UN VALOR ANTERIOR
	for(int i=1;i<numero;i++){ // SOLO LOS DIVISORES MENORES AL NUMERO
		if(numero%i==0){ // AL ENCONTRAR DIVISOR LO SUMARA AL RESULTADO ANTERIOR
			sum+=i;
		}
	}
	return sum;
}

bool NumerosAmigos(int numero,int numero2){ // DADO DOS NUMEROS VERA SI ESTOS SON AMIGOS
	if (numero == sumaDivisores(numero2)){ // COMO SABEMOS QUE NUMERO2 SON LA SUMA DE DIVISORES DE NUMERO1 (YA QUE LO CALCULAMOS EN EL MAIN*) BASTARA CON HACER ESTA COMPARACION
		return true;
	}
	return false;
}

int main(){
	int tope;
	int divisoresI; // VARIABLE AUXILIAR PARA GUARDAR LOS DIVISORES DE UN NUMERO
	cout << "INGRESE TOPE DE NUMERO A CALCULAR: "; cin >> tope;
	for(int i=2;i<=tope;i++){ // COMO SON LOS DIVISORES MENORES AL NUMERO PARTIREMOS DESDE EL 2 
		divisoresI = sumaDivisores(i); // GUARDA LOS DIVISORES DE UN NUMERO I (AQUI SE CALCULA LO DE LA FUNCION*)
		if(i<divisoresI && NumerosAmigos(i,divisoresI)){ // SI EL NUMERO ES MENOR QUIERE DECIR QUE SON DISTINTOS POR LO TANTO CUMPLE EL RETO ADEMAS SALDRA IMPRESO EN EL ORDEN DE MENOR A MAYOR Y SOLO SALDRA UNA VEZ EL PAR
				cout << "(" << i << "," << divisoresI << ")\n";
		}
	}
	
	return 0;
}
