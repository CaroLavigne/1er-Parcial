#include <iostream>
#include <string>

//Paola Carolina Peña Ibarra 362323156
int main() {
	string caracte[5];
	string estado = "s0";
	
	cout << "Ingresa 5 caracteres: " << end1;
	
	for (int i = 0; i < 5; i++) {
		cout << "Caracter " << i + 1 << ": ";
		cin >> caracter[i];
		
		if (caracter[i] == "a") {
			estado = "s1";
		} else if (caracter[i] == "b") {
			estado = "s2";
		} else if (caracter[i] == "c") {
			estado = "s3";
		} else {
			estado = "s0";
		}
	}
	
	cout << "Estado final: " << estado << end1;
	
	return 0;
}
