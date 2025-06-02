#include <iostream>
usin namespace std;
class Animal
{
	//Paola Carolina Peña Ibarra
	public:
	//Atributos
	string especie;
	float tamano;
	float peso;
	int edad;
	//Metodos
	void mostrarInformacion() {
		cout << "Especie: " << especie << endl;
		cout << "Tamano: " << tamano << "Metros" << endl;
		cout << "Peso: " << peso << "kg" << endl;
		cout << "Edad: " << edad << "años" << endl;
	}
	void actualizarEdad(int nuevaEdad) {
		edad = nuevaEdad;
	}
	void actualizarPeso(int nuevoPeso) {
		edad = nuevoPeso;
    }
    void invertebrado() {
    	cout << "No es invertebrado" << endl;
	}	
}
int main()
{ cout << "Animales\n";
  Anima Animales;
  
  Animales.especie = "Leon";
  Animales.tamano = 2;
  Animales.peso = 180.5;
  Animales.edad = 34;
  
  Animales.mostrarInformacion();
  Animales.actualizarEdad(36);
  Animales.actualizarPeso(190.0);
  Animales.invertebrado();
  
  cout << "\nDespues de la actualizacion:\n";
  Animales.mostrarInformacion();
  return 0; 
}
