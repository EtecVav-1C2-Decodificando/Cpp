#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int adicao (int a, int b) {
	
	int soma=a+b;
	return soma;
}

int subtracao (int a, int b) {
	
	int menos=a-b;
	return menos;
}

int multiplicacao (int a, int b) {
	
	int vezes=a*b;
	return vezes;
}

float divisao (int a, int b) {
	
	float dividido= static_cast<float>(a) / b;
	return dividido;

}

int main(int argc, char** argv) {
	int a, b;
	char r='s';
	while(r=='s'){
	
	std:: cout<<"Escreva um numero: ";
	std:: cin>>a;
	
	std:: cout<<"Escreva um numero: ";
	std:: cin>>b;
	
	int soma = adicao (a, b);
	std:: cout<<a<< " + "<<b<<" = "<<soma<<"\n";
	
	int menos = subtracao (a, b);
	std:: cout<<a<< " - "<<b<<" = "<<menos<<"\n";
	
	int vezes = multiplicacao (a, b);
	std:: cout<<a<< " x "<<b<<" = "<<vezes<<"\n";
	
	float dividido = divisao (a, b);
	std:: cout<<a<< " / "<<b<<" = "<<dividido<<"\n";
	
	std::cout <<"Continuar n/s? ";
	std::cin>> r;
	
	}
	
	return 0;
}
