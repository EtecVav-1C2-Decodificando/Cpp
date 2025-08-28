#include <iostream>
#include <cmath> // para usar M_PI

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float areaCirculo(float raio) {
    return M_PI * raio * raio;
}

int main(int argc, char** argv) {
    float raio, somaArea = 0.0f;
     char r = 's';
    
    while (r == 's' || r == 'S') {
    somaArea=0.0f;
        
    for (int i = 1; i <= 5; i++) {
        std::cout << "Digite o raio do circulo " << i << ": ";
        std::cin >> raio;
        somaArea += areaCirculo(raio);
    }
    
    std::cout << "\nA soma das areas dos 5 circulos e: " << somaArea << std::endl;
    
    std::cout << "\nDeseja continuar? (s/n): ";
        std::cin >> r;
    }

    return 0;
}
