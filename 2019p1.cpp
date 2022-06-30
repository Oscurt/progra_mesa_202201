#include <iostream>
using namespace std;

void bubblesort(float arr[], int N){ // ordena de forma de mayor a menor
	for(int i=0;i<N-1;i++){
		for(int j=0;j<N-i-1;j++){
			if (arr[j] < arr[j + 1]){
				int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
			}
		}
	}
}

int getMax(float arr[], int N){ // forma 2
	float max = arr[0];
	int index = 0;
	for(int i=0;i<N;i++){
		if (arr[i] > max){
			max = arr[i];
			index = i;
		}
	}
	return index;
}

int main(){
	int N;
	cin >> N;
	float valores[N];
	float pond[N];
	cout << "Ingresar valores: ";
	for(int i=0;i<N;i++){
		cin >> valores[i];
	}
	cout << "Ingresar ponderadores: ";
	for(int i=0;i<N;i++){
		cin >> pond[i];
	}
	
	float dowa = 0;
	
	//bubblesort(pond, N);
	
	for(int i=0;i<N;i++){
		dowa += valores[i]*pond[i]/100;
	}
	
	/* //FORMA 2
	
	for(int i=0;i<N;i++){
		int max = getMax(pond, N);
		dowa += valores[i]*pond[max]/100;
		pond[max] = -1;
	}
	
	*/
	
	cout << dowa << endl;
	
	return 0;
}