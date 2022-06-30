#include <iostream>
using namespace std;

bool isPrimo(int N){
	int counter = 0;
	for(int i=1;i<=N;i++){
		if (N%i == 0){
			counter++;
		}
	}
	if (counter == 2) return true;
	return false;
}

int main(){
	int N;
	cin >> N;
	cout << isPrimo(N) << endl;
	return 0;
}