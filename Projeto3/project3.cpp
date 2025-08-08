#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	float altura, pesoideal;
	char sexo, r;
	r='s';
	
	while(r=='s'){
	
	std::cout<<"Qual seu sexo? (responda F para feminino e M para masculino) ";
	std::cin>>sexo;
	std::cout<<"Qual sua altura?";
	std::cin>>altura;
	
	if(sexo=='M'){
		pesoideal=(altura*72.7)-58;
		
	std::cout << "Seu peso ideal e de: " << pesoideal << std::endl;
		
	}
	else{
	if(sexo=='F'){
			pesoideal=(altura*62.1)-44.7;
			
	std::cout << "Seu peso ideal e de: " << pesoideal << std::endl;
		}
	}
	
	std::cout<<"Continuar?(s/n)";
	std::cin>>r;
	
	}
	getchar();
	return 0;
}
