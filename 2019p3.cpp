#include <iostream>
using namespace std;

int main(){
	
	int n = 6;
	
	string data[n][2];
	int lvl[n];
	for(int i=0;i<n;i++){
		cout << "Ingrese nombre: ";
		cin >> data[i][0];
		cout << "Ingrese tipo: ";
		cin >> data[i][1];
		cout << "Ingrese lvl: ";
		cin >> lvl[i];
	}
	
	int mayor = lvl[0];
	int index = 0;
	
	for(int i=0;i<n;i++){
		if(mayor < lvl[i]){
			mayor = lvl[i];
			index = i;
		}
	}
	
	cout << "El porquemon con mayor nivel es: " << data[index][0] << " de tipo: " << data[index][1] << endl;

	int counter = 0;
	for(int i=0;i<n;i++){
		if (data[i][0] == "Pichakus"){
			counter++;
		}
	}
	
	cout << "Tenemos " << counter << " Pichakus almacenados." << endl;
	
	return 0;
}