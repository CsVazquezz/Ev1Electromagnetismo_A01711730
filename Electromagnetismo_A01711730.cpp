#include <iostream>
#include <iomanip>  

//A01711730
//Examen argumentativo Electromagnetismo

// Constante de permeabilidad del vacío (T*m/A)
const double MU_0 = 4 * 3.14159 * 1e-7;

// Función para calcular el campo magnético dentro de un solenoide
double calcularCampoMagnetico(double n, double I) {
    return MU_0 * n * I;
}

int main() {
    std::cout << "Calculadora de Campo Magnetico de un Solenoide: " << std::endl;
    
    double n, I;
    
    // Entradas del usuario
    std::cout << "Ingrese el numero de vueltas por metro del solenoide (n): ";
    std::cin >> n;
    std::cout << "Ingrese la corriente que pasa por el solenoide (I) en amperios: ";
    std::cin >> I;
    
    // Cálculo del campo magnético
    double B = calcularCampoMagnetico(n, I);
    
    // Mostrar resultado con notación científica y precisión de 6 decimales
    std::cout << "El campo magnetico dentro del solenoide es: " 
              << std::scientific << std::setprecision(6) << B << " T" << std::endl;
    
    return 0;
}
