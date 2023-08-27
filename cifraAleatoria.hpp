#pragma once
#include <iostream>
class aleatorio{
    public: 
        std::string input,output = "";
        void criar();
        bool toBool(int x);
        bool alfabetoTeste, pularLetraTeste, alfaNumericoTeste;
        int letterToNum(char letter);
        char numToLetter(int num);
        std::string lowerCase(std::string str);
        char alfabeto(char input);
        std::string pularLetra(std::string input,int indice);
        std::string alfanumerico(std::string input);
};