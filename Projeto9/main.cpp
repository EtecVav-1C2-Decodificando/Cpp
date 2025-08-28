 #include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

std::string substituiVogal (std::string palavra) {
	//Percorre todas as letras da palavra verificando vogais.
	for (int i=0; i < palavra.length(); i++) {
		char c = palavra[i];
		//Troca a letra da posicao i por *, caso seja uma vogal
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        	palavra[i] = '*'; 
    	}
	}
	return palavra;
}


int main(int argc, char** argv) {
	std::string palavra;
	char r='s';
	
	while (r=='s'){
	
	    std::cout << "Digite uma palavra: ";
	    std::cin >> palavra;
	
	    std::cout << "Resultado: " << substituiVogal(palavra) ; // Executa a funcao e exibe a palavra final.
	    
	    std::cout << "\nContinuar s/n?";
	    std::cin >> r;
    }
    return 0;
}

