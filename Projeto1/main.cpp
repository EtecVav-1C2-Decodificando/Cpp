#include <iostream>

// Funcao retorna a soma dos numeros impares ate o número
int ehImpar(int num) {
    int soma = 0;  // Variavel para armazenar a soma dos impares
    
    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0) {  // Verifica se 'i (numero atual do loop)' e impar
            soma = soma+i;  // Adiciona 'i' na soma
        }
    }
    
    return soma;  // Retorna a soma dos numeros impares
}

int main(int argc, char** argv) {
	char r='s';
    int num;
    
    while(r=='s'){

	    std::cout << "Digite um numero inteiro: ";
	    std::cin >> num;
	
	    // executa a funcao e guarda o resultado na variavel 
	    int soma = ehImpar(num);
	
	    // Exibe a soma dos numeros impares
	    std::cout << "A soma dos numeros impares ate o numero escolhido e: " << soma;
	    
	    std::cout << "\nContinuar? s/n: ";
	    std::cin >> r;
    
	}

    return 0;
}




