#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float pesoIdealMasculino(float altura) {
    return (72.7 * altura) - 58;
}

float pesoIdealFeminino(float altura) {
    return (62.1 * altura) - 44.7;
}

int main(int argc, char** argv) {
    float altura, pesoideal;
    char sexo, r = 's';
    
    while (r == 's' || r == 'S') {
        std::cout << "Qual seu sexo? (F para feminino / M para masculino): ";
        std::cin >> sexo;
        std::cout << "Qual sua altura? ";
        std::cin >> altura;
        
        if (sexo == 'M' || sexo == 'm') {
            pesoideal = pesoIdealMasculino(altura);
            std::cout << "Seu peso ideal e de: " << pesoideal << " kg" << std::endl;
        } 
        else if (sexo == 'F' || sexo == 'f') {
            pesoideal = pesoIdealFeminino(altura);
            std::cout << "Seu peso ideal e de: " << pesoideal << " kg" << std::endl;
        } 
        
        
        std::cout << "\nDeseja continuar? (s/n): ";
        std::cin >> r;
    }
    
    return 0;
}
