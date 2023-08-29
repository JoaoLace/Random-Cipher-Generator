#pragma once
#include <iostream>
class aleatorio{
    public: 
        std::string outputDescodificado,inputCodificado,buceta = "";
        char descodeAlfa1(char input);
        void descodeNum(std::string str);
        char descodificarJump(char indice, char letra);
        char alfa2ToLetter(char receber);
        std::string input,output = "";
        void criar();
        bool toBool(int x);
        bool alfabetoTeste, pularLetraTeste, alfaNumericoTeste;
        int letterToNum(char letter);
        char numToLetter(int num);
        std::string lowerCase(std::string str);
        char alfabeto_1(char input);
        char alfabeto_2(char input);
        std::string pularLetra(std::string input,int indice);
        std::string alfanumerico(std::string input);
        void mudarAlfabeto_1();
        void mudarAlfabeto_2();
        std::string key = "";
        void descodificar();
        void codeNum();
};