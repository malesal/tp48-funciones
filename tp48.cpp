#include <iostream>
using namespace std;

float CalcularPeso(float peso);

int main() {
    float pesoTierra;
    
    cout << "Ingrese su peso en la Tierra (en kg): ";
    cin >> pesoTierra;
    
    float pesoLuna = CalcularPeso(pesoTierra);
    
    cout << "Su peso en la Luna es de: " << pesoLuna << " kg" << endl;
    
    return 0;
}

    float CalcularPeso(float peso) {
    float pesoLuna = (peso / 9.81) * 1.622;
    return pesoLuna;
	}
