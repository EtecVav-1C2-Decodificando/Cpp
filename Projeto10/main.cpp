#include <iostream>
#include <string>
#include <cctype> 



bool ehVogal(char c) {
    c = tolower(c); 
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}


int contarVogais(const std::string& nome) {
    int contador = 0;
    for (char c : nome) {
        if (ehVogal(c)) {
            contador++;
        }
    }
    return contador;
}


int contarConsoantes(const std::string& nome) {
    int contador = 0;
    for (char c : nome) {
        if (isalpha(c) && !ehVogal(c)) {
            contador++;
        }
    }
    return contador;
}

int main() {
    std::string nomeCompleto;

    std::cout << "Digite o nome completo: ";
    getline(std::cin, nomeCompleto);

    int totalVogais = contarVogais(nomeCompleto);
    int totalConsoantes = contarConsoantes(nomeCompleto);

    std::cout << "Quantidade de vogais: " << totalVogais << "\n";
    std::cout << "Quantidade de consoantes: " << totalConsoantes << "\n";

    return 0;
}


