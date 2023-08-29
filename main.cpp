#include <iostream>
#include "classes.hpp"
#include "cifraAleatoria.hpp"
int main () {
    std::string escolha;
     cesar test;
     aleatorio random;
     while (test.lowerCase(escolha)!="out"){
    std::cout << "Codigos para quebrar:\n -Cesar \n Aleatorio \n";
    std::cin >> escolha;
    
    if (test.lowerCase(escolha) == "cesar"){
        while (escolha != "sair"){
        std::cout << "Codificar ou descodificar? \n";
        std::cin >> escolha;
        if (test.lowerCase(escolha) == "codificar"){
            test.codificar();
            test.output = "";
        }
   
        else if (test.lowerCase(escolha) == "descodificar"){
            test.descodificar();
            test.output = "";}
        std::cout << "\n";
        system("pause");
        system("cls");
        }
        
    }
    if (escolha == "a"){
        std::string choice = "";
        std::cout << "Codificar ou Descodificar? \n";
        std::cin >> choice;
        choice == "codificar" ? random.criar() : random.descodificar();
        system("pause");
        system("cls");
    }}
}