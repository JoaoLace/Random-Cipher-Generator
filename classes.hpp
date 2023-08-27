#pragma once
#include <iostream>
class cesar {
public:
    std::string input,output = "";
    void codificar();
    void descodificar();
    int letterToNum(char letter);
    char numToLetter(int num);
    std::string lowerCase(std::string str);
};