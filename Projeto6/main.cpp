#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num;
	char r='s';
	while (r=='s'){
	
    std::string dias[8] = {"", "Domingo", "Segunda-feira", "Terca-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sabado"};

    std::cout << "Digite o número do dia da semana (1 a 7): ";
    std::cin >> num;

    if (num >= 1 && num <= 7) {
        std::cout << dias[num] << "\n";
    } else {
        std::cout << "Número inválido. Digite um número de 1 a 7.\n";
    }
    	std:: cout << "Deseja continuar? s/n";
    	std:: cin >> r;
    }
    
    return 0;
}

