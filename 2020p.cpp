#include <iostream>
#include <math.h>
using namespace std;

int evaluaPolinomio(int poli[6], int x){
    int output = 0; // para ir sumando los valores de los coeficientes
    for(int i = 0; i < 6; i++){
        output += poli[i] * pow(x, 5-i); // se multiplica el coeficiente por el valor de x elevado al exponente
    }
    return output;
}

void derivaPolinomio(int poli[6], int poliDerivado[5]){
    for(int i = 0; i < 5; i++){
        poliDerivado[i] = poli[i] * (5-i); 
    }
}

void sumaPolinomios(int poliA[6], int poliB[6], int poliC[6]){
    for(int i = 0; i < 6; i++){
        poliC[i] = poliA[i] + poliB[i]; // se suman los coeficientes y se guardan en el polinomio C
    }
}

int main(){
    int poli[6];
    for(int i=0;i<6;i++){
        cin>>poli[i];
    }
    int x;
    cin>>x;
    cout << evaluaPolinomio(poli, x) << endl;
    int poliDerivado[5];
    derivaPolinomio(poli, poliDerivado);
    cout << "El polinomio derivado es: ";
    for(int i = 0; i < 5; i++){
        cout << poliDerivado[i];
        if(i != 4){
            cout << "x^" << (4-i) << " + ";
        }
    }
    cout << endl;
    int poliB[6];
    for(int i=0;i<6;i++){
        cin>>poliB[i];
    }
    int poliC[6];
    sumaPolinomios(poli, poliB, poliC);
    cout << "El polinomio C es: ";
    for(int i = 0; i < 6; i++){
        cout << poliC[i];
        if(i != 5){
            
            cout << "x^" << (5-i) << " + ";
        }
    }
    return 0;
}