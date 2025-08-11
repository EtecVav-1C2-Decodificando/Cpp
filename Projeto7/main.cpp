#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num[5];
	bool crescente= true;
	bool decrescente= true;
	
	std::cout << "Digite 5 numeros na entrada\n";
	
	for (int i = 0; i < 5; i++) {
        std::cout << "Digite o " << i + 1 << " numero: ";
        std::cin >> num[i];
    }
        
    for (int i = 0; i < 4; i++) {
    
	    if (num[i + 1] < num[i]) {
        crescente = false;
    	}
    	if (num[i + 1] > num[i]) {
        decrescente = false;
    	}  
    }
    
    if (crescente){
        std::cout << "Essa e uma ordem crescente\n";
    }else if(decrescente){
        std::cout << "Essa e uma ordem decrescente\n";
    }else{
        std::cout << "Essa e uma sequencia nao ordenada\n";
	}
	
	return 0;
}
