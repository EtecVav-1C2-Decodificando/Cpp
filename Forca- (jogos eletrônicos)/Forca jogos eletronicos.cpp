#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

void desenharforca (int tentativas){
	if( tentativas==0){
	    		cout << " _______	\n";
	    		cout << " |     |	\n";
	    		cout << " |       	\n";
	    		cout << " |			\n";
	    		cout << " |			\n";
	    		cout << " |			\n";
	    		cout << "_|_		\n";
	    	}else if(tentativas==1){
	    		cout << " _______	\n";
	    		cout << " |     |	\n";
	    		cout << " |     O 	\n";
	    		cout << " |			\n";
	    		cout << " |			\n";
	    		cout << " |			\n";
	    		cout << "_|_		\n";
	    	} else if (tentativas==2){
	    		cout << " _______	\n";
	    		cout << " |     |   \n";
	    		cout << " |     O 	\n";
	    		cout << " |     | 	\n";
	    		cout << " |			\n";
	    		cout << " |			\n";
	    		cout << "_|_		\n";
	    	} else if (tentativas==3){
	    		cout << " _______	\n";
	    		cout << " |     |   \n";
	    		cout << " |     O   \n";
	    		cout << " |     |\\  \n";
	    		cout << " |			\n";
	    		cout << " |			\n";
	    		cout << "_|_		\n";
	    	}else if (tentativas==4){
	    		cout << " _______	\n";
	    		cout << " |     |   \n";
	    		cout << " |     O   \n";
	    		cout << " |    /|\\  \n";
	    		cout << " |			\n";
	    		cout << " |			\n";
	    		cout << "_|_		\n";
	    	}else if (tentativas==5){
	    		cout << " _______	\n";
	    		cout << " |     |    \n";
	    		cout << " |     O    \n";
	    		cout << " |    /|\\   \n";
	    		cout << " |    /     \n";
	    		cout << " |\n";
	    		cout << "_|_\n";
	    	}else if (tentativas==6){
	    		cout << " _______	\n";
	    		cout << " |     |    \n";
	    		cout << " |     O    \n";
	    		cout << " |    /|\\   \n";
	    		cout << " |    / \\   \n";
	    		cout << " |\n";
	    		cout << "_|_\n";
	    	}
}

void esconderpalavra(char palavra_secreta[],char palavra_oculta[], int tamanho){	

	for (int i = 0; i < tamanho; i++) {
	    	
		    if (palavra_secreta[i] == ' ') {
		    	
		        palavra_oculta[i] = ' ';
		    } else {
		    	
		        palavra_oculta[i] = '_';
		    }
	        
    }
    
}

int main(int argc, char** argv) {
	
	char palavra[38][30] = {"Hello Neighbor", "Among Us", "PUBG", "Mortal Kombat", "Undertale", "Terraria", "The Sims", "Resident Evil", "Darksouls", "Cyberpunk", "The Last Of Us", "Red Dead Redemption", "Elden Ring", "Mario", "Minecraft", "Roblox", "FIFA", "PES", "Skyrim", "GTA", "Brawhalla", "Fortnite", "Valorant", "LOL", "Sonic", "Bloons", "CSGO", "FNAF", "Call Of Duty", "Doom", "Diablo", "Hitman", "God Of War", "Fallout", "Forza", "Halo", "Limbo", "PayDay"};
    char palavra_secreta[30];
    char palavra_oculta[30];
    char letra;
    int ns;
    bool acertou = true;
    int tentativas=0;
    int qtdLetras=0;
    char letrasDigitadas[26];
    char resposta[5] = {"sim"};
    srand (time(NULL));
    
     
    while (strcmp(resposta, "sim") == 0){	
    
		qtdLetras=0;    
    	ns = rand() % 38;
    	int tamanho = strlen(palavra[ns]);
		strcpy(palavra_secreta, palavra[ns]);
		
		tentativas=0;
    	
		esconderpalavra(palavra_secreta, palavra_oculta, tamanho);
    	
    	cout << "______________________________\n";
    	
    	cout << "Seja bem-vindo ao jogo da forca\n";\
    	
    	cout << " _______	\n";
	    cout << " |     |	\n";
	    cout << " |       	\n";
	    cout << " |			\n";
	    cout << " |			\n";
	    cout << " |			\n";
	    cout << "_|_		\n";
    	
    	
	    while (true){
	    	cout << "Tema: Jogos eletronicos\n";
	        cout << "Palavra: " << palavra_oculta << "\n";
		
	        cout << "\nDigite uma letra: ";
	        cin >> letra;
	        letra = (tolower(letra));
	        
	        
	        
	        acertou = false;
	
	        for (int i = 0; i < tamanho; i++)
	        {
	           if (tolower(palavra_secreta[i]) == letra && palavra_oculta[i] == '_')
	            {
	                palavra_oculta[i] = palavra_secreta[i];
	                acertou = true;
	            }
	    	}
	    	
	    	system("cls");
	    	
	        if (acertou != true){
	        	tentativas ++;
	        	cout << "Letra incorreta! Tentativas restantes: " << (6-tentativas) << "\n";
	        } else if (acertou == true) {
	        	cout << "Voce acertou! Tentativas restantes: " << (6-tentativas) << "\n";
	        }
			
			desenharforca(tentativas);
	        
	        if (tentativas == 6){
	        	cout << "Voce perdeu! A palavra era ' " << palavra_secreta << " ' \n";
	        	break;
	        }
	            
	    	if (strcmp(palavra_oculta, palavra_secreta) == 0) {
	    		cout << "Voce venceu! A palavra era  ' " << palavra_secreta << " '\n";
	    		break;
	    	} 
	    }

    cout << "Continuar? (sim / nao)?: ";
    cin>> resposta;
    system("cls");
    }
    return 0;

}
