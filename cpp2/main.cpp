#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int potencia (int base, int expoente){
	 int resultado =1;
	 for (int i = 1; i <= expoente; i++) {
            resultado *= base;
    }
    return resultado;
}


int main(int argc, char** argv) {

	char r = 's';
	while(r == 's'){
	int base, expoente;
	
	
		std:: cout << "De um valor para base: ";
		std:: cin >> base;
		
		std:: cout << "De um valor para o expoente: ";
		std:: cin >> expoente;
		
		int resultado = potencia(base, expoente);
    
		std:: cout << "A potencia e: " << resultado;
		std:: cout << "\nDeseja continuar (S/N)?";
		std:: cin >> r; 
	}
		
		
		
	return 0;
}
