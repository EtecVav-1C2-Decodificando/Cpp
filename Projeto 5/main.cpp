#include <cstdlib>
#include <iostream>
#include <string>
#include <stdbool.h>


bool e_palindromo(const std::string& palavra) {
    int inicial = 0;
    int final = palavra.length() - 1;
        
        while(inicial < final){
               if (palavra [inicial] != palavra[final]) {
                  return false; 
               }
               
               inicial++;
               final--;
          }
        
          return true;
}

int main(int argc, char *argv[])
{
    std:: string palavra;

   
    std:: cout << "Escreva uma palavra: ";
    std:: getline (std:: cin, palavra);
    
    if(e_palindromo(palavra)){
        std:: cout << "Esta palavra'" << palavra << " ' e um palindromo";
    } else {
           std:: cout << "Esta palavra '" << palavra << " 'nao e um palindromo";
    } 
    
    return 0;
    
}

