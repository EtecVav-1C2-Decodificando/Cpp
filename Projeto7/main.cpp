#include <iostream>

int verificarSequencia(int num[]) {
    bool crescente = true; 
    bool decrescente = true;
    
    // Loop para verificar os n�meros consecutivos
    for (int i = 0; i < 4; i++) {
        if (num[i + 1] < num[i]) {  // Se o pr�ximo n�mero for menor, n�o � crescente
            crescente = false;
        }
        if (num[i + 1] > num[i]) {  // Se o pr�ximo n�mero for maior, n�o � decrescente
            decrescente = false;
        }
    }
    
    // Retornar o tipo da ordem
	if (crescente) {
	    return 1;  // Se for crescente, retorna 1 e sai da fun��o
	} else if (decrescente) {
	    return -1;  // Se n�o for crescente, mas for decrescente, retorna -1
	} else {
	    return 0;  // Caso contr�rio, retorna 0 (sequ�ncia n�o ordenada)
	} 
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int num[5];
	char r='s';
	
	while(r=='s'){
	
		std::cout << "Digite 5 numeros na entrada\n";
		
		for (int i = 0; i < 5; i++) { // Loop para ler os 5 numeros dentro do vetor
	        std::cout << "Digite o " << i + 1 << " numero: ";
	        std::cin >> num[i];
	    }
	    
	    int tipo = verificarSequencia(num) ; // Executa a funcao para descobrir o tipo da ordem
	    
	    if (tipo == 1) { // Exibe o tipo da ordem de acordo com o resultado da funcao
	    	
	        std::cout << "Essa e uma ordem crescente\n";
	        
	    } else if (tipo == -1) {
	    	
	        std::cout << "Essa e uma ordem decrescente\n";
	        
	    } else {
	    	
	        std::cout << "Essa e uma sequencia nao ordenada\n";
	        
	    }
	    
	    std::cout << "Continuar? s/n: ";
	    std::cin >> r;
	    
	}
	
	return 0;
}
