#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	char r = 's';
	while(r == 's'){
	int base, expoente, potencia=1 ;
	
	
		std:: cout << "De um valor para base: ";
		std:: cin >> base;
		
		std:: cout << "De um valor para o expoente: ";
		std:: cin >> expoente;
		
	 for (int i = 1; i <= expoente; i++) {
            potencia *= base; // Multiplica a base pelo valor da pot�ncia a cada itera��o
    }
    
		std:: cout << "A potencia e: " << potencia;
		std:: cout << "\nDeseja continuar (S/N)?";
		std:: cin >> r; 
	}
		
		
		
	return 0;
}
