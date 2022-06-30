#include <iostream>
using namespace std;

bool predisp(char madre[10], char padre[10]){
	string s = "";
	for(int i=0;i<10;i++){ // si encuentra letra la suma, independiente de donde venga
		if (madre[i] == 'u' || madre[i] == 'd' || madre[i] == 'p'){
			s = s + madre[i];
		}
		if (padre[i] == 'u' || padre[i] == 'd' || padre[i] == 'p'){
			s = s + padre[i];
		}
	}
	if (s == "udp") return true; // si forma udp cumple.
	return false;
}

void u(char madre[10], char padre[10]){
	for(int i=0;i<10;i++){
		if (madre[i] == 'u'){
			cout << "Viene de la madre en indice: " << i << endl;
			return;
		}
	}
	for(int i=0;i<10;i++){
		if (padre[i] == 'u'){
			cout << "Viene del padre en indice: " << i << endl;
			return;
		}
	}
	cout << -1 << endl;
}

void d(char madre[10], char padre[10]){
	for(int i=0;i<10;i++){
		if (madre[i] == 'd'){
			cout << "Viene de la madre en indice: " << i << endl;
			return;
		}
	}
	for(int i=0;i<10;i++){
		if (padre[i] == 'd'){
			cout << "Viene del padre en indice: " << i << endl;
			return;
		}
	}
	cout << -1 << endl;
}

void p(char madre[10], char padre[10]){
	for(int i=0;i<10;i++){
		if (madre[i] == 'p'){
			cout << "Viene de la madre en indice: " << i << endl;
			return;
		}
	}
	for(int i=0;i<10;i++){
		if (padre[i] == 'p'){
			cout << "Viene del padre en indice: " << i << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main(){
	char madre[10];
	char padre[10];
	cin >> madre >> padre;
	cout << predisp(madre, padre) << endl;
	cout << "La letra u: ";
	u(madre, padre);
	cout << "La letra d: ";
	d(madre, padre);
	cout << "La letra p: ";
	p(madre, padre);
	return 0;
	
	// atydbbumlk oolkinnahb
	// cqbulsbnpm jxtzfhdikh
	// isygwolvfr tunzdrwpoj
	
}