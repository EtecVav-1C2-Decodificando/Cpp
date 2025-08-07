#include <iostream>
	
	using namespace std;
	

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	bool ehImpar (int num){
		return num % 2 !=0;
	}

int main(int argc, char** argv) {
	int num, impar=0;

	cout<<"Digite um numero inteiro: ";
	cin>>num;
	
	for (int i=1; i <= num; i++){
		if(ehImpar(i)){
			impar=impar+i;
		}
	}
	
	cout<<"A soma dos numeros"<<impar;
	
	return 0;
}
