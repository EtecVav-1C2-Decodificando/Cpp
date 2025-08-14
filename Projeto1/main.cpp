#include <iostream>

// Função retorna a soma dos números ímpares até o número
int ehImpar(int num) {
    int soma = 0;  // Variável para armazenar a soma dos ímpares
    
    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0) {  // Verifica se 'i (numero atual do loop)' é ímpar
            soma = soma+i;  // Adiciona 'i' à soma
        }
    }
    
    return soma;  // Retorna a soma dos números ímpares
}

int main() {
	char r='s';
    int num;
    
    while(r=='s'){

    std::cout << "Digite um numero inteiro: ";
    std::cin >> num;

    // executa a função e guarda o resultado na variável 
    int soma = ehImpar(num);

    // Exibe a soma dos números ímpares
    std::cout << "A soma dos numeros impares ate o numero escolhido e: " << soma;
    
    std::cout << "\nContinuar? s/n: ";
    std::cin >> r;
    
	}

    return 0;
}

