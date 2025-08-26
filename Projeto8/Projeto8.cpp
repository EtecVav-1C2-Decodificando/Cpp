#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float raio, soma, area;
	int i;
	char r;

	r='s';
	
	while(r=='s'){
	soma=0;
	i=1;
		while(i<=5){
	
			std::cout<<"Qual o raio do circulo?";
			std::cin>>raio;
	
			area=3.14*raio*raio;
			soma=soma+area;
		
		i++;
		}
	
		std::cout<<"A soma e: "<<soma<<std::endl;
		std::cout<<"Continuar?(s/n)";
		std::cin>>r;
	}
	
	return 0;
}
