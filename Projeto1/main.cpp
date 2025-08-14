#include <iostream>

// Fun��o retorna a soma dos n�meros �mpares at� o n�mero
int ehImpar(int num) {
    int soma = 0;  // Vari�vel para armazenar a soma dos �mpares
    
    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0) {  // Verifica se 'i (numero atual do loop)' � �mpar
            soma = soma+i;  // Adiciona 'i' � soma
        }
    }
    
    return soma;  // Retorna a soma dos n�meros �mpares
}

int main() {
	char r='s';
    int num;
    
    while(r=='s'){

    std::cout << "Digite um numero inteiro: ";
    std::cin >> num;

    // executa a fun��o e guarda o resultado na vari�vel 
    int soma = ehImpar(num);

    // Exibe a soma dos n�meros �mpares
    std::cout << "A soma dos numeros impares ate o numero escolhido e: " << soma;
    
    std::cout << "\nContinuar? s/n: ";
    std::cin >> r;
    
	}

    return 0;
}

