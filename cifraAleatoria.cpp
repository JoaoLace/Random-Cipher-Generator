#include "cifraAleatoria.hpp"
#include <cstdlib>
int aleatorio::letterToNum(char letter){
    switch (letter) {
        case 'a':
            return 1;
        case 'b':
            return 2;
        case 'c':
            return 3;
        case 'd':
            return 4;
        case 'e':
            return 5;
        case 'f':
            return 6;
        case 'g':
            return 7;
        case 'h':
            return 8;
        case 'i':
            return 9;
        case 'j':
            return 10;
        case 'k':
            return 11;
        case 'l':
            return 12;
        case 'm':
            return 13;
        case 'n':
            return 14;
        case 'o':
            return 15;
        case 'p':
            return 16;
        case 'q':
            return 17;
        case 'r':
            return 18;
        case 's':
            return 19;
        case 't':
            return 20;
        case 'u':
            return 21;
        case 'v':
            return 22;
        case 'w':
            return 23;
        case 'x':
            return 24;
        case 'y':
            return 25;
        case 'z':
            return 26;
        default:
            return -1; 
    }
}
char aleatorio::numToLetter(int num){
     switch (num) {
        case -2:
            return 'x';
        case -1:
            return 'y';
        case 0:
            return 'z';
        case 1:
            return 'a';
        case 2:
            return 'b';
        case 3:
            return 'c';
        case 4:
            return 'd';
        case 5:
            return 'e';
        case 6:
            return 'f';
        case 7:
            return 'g';
        case 8:
            return 'h';
        case 9:
            return 'i';
        case 10:
            return 'j';
        case 11:
            return 'k';
        case 12:
            return 'l';
        case 13:
            return 'm';
        case 14:
            return 'n';
        case 15:
            return 'o';
        case 16:
            return 'p';
        case 17:
            return 'q';
        case 18:
            return 'r';
        case 19:
            return 's';
        case 20:
            return 't';
        case 21:
            return 'u';
        case 22:
            return 'v';
        case 23:
            return 'w';
        case 24:
            return 'x';
        case 25:
            return 'y';
        case 26:
            return 'z';
        default:
            return '\0'; 
    }
}
std::string aleatorio::lowerCase(std::string str){
    std::string lowecase = "";
    for (int x : str){
        lowecase += tolower(x);
    }
    return lowecase;
}
void aleatorio::criar(){
    aleatorio::key = "";
    aleatorio::input ="";
    aleatorio::output = "";
    std::cout << "Insira: \n";
    std::cin >> aleatorio::input;
    int teste = rand() % 2;
    int indice = (rand() % 3) + 1;
    if (teste == 0){
        mudarAlfabeto_1();
        std::cout << aleatorio::output << "\n";
        }
    if (teste == 1) {
        mudarAlfabeto_2();
    
    std::cout << "Indice: " << indice << "\n";

    aleatorio::output = aleatorio::pularLetra(aleatorio::output, indice);

    std::cout << "Output before codeNum():" << aleatorio::output << "\n";
    aleatorio::codeNum();
    std::cout << "Output after codeNum(): " << aleatorio::output <<  "\n";
    }
    std::cout << "Descode key = " << aleatorio::key << "\n";



}
void aleatorio::mudarAlfabeto_1(){
    aleatorio::key += "a1";
    for (char x : aleatorio::input){
        aleatorio::output += aleatorio::alfabeto_1(x);
    }
}
void aleatorio::mudarAlfabeto_2(){
    aleatorio::key += "a2";
    aleatorio::output = "";
    for (char x : aleatorio::input){
        aleatorio::output += aleatorio::alfabeto_2(x);
    }
}
void aleatorio::codeNum(){
    int x;
    for (char i : output){
       
        if (i == 'a')
            aleatorio::output[x] = '1';
        if (i == 'e')
            aleatorio::output[x] = '2';
        if (i == 'i')
            aleatorio::output[x] = '3';
        if (i == 'o' )
            aleatorio::output[x] = '4';
        if (i == 'u')
            aleatorio::output[x] = '5';
        x++;
    }
}
void aleatorio::descodeNum(std::string str){

    int x;
    for (char i : str){
       
        if (i == '1')
            str[x] = 'a';
        if (i == '2')
            str[x] = 'e';
        if (i == '3')
            str[x] = 'i';
        if (i == '4' )
            str[x] = 'o';
        if (i == '5')
            str[x] = 'u';
        x++;
    }
    aleatorio::buceta = str;

}
char aleatorio::alfa2ToLetter(char receber){
    switch (receber)
    {
    case '!':
        return 'a';
    case '@':
        return 'b';
    case '#':
        return 'c';
    case '$':
        return 'd';
    case '%':
        return 'e';
    case '8':
        return 'f';
    case '&':
        return 'g';
    case '*':
        return 'h';
    case '(':
        return 'i';
    case ')':
        return 'j';
    case '-':
        return 'k';
    case '+':
        return 'l';
    case '=':
        return 'm';
    case '6':
        return 'n';
    case '/':
        return 'o';
    case '|':
        return 'p';
    case ',':
        return 'r';
    case '<':
        return 's';
    case '>':
        return 't';
    case ':':
        return 'u';
    case '~':
        return 'v';
    case '^':
        return 'w';
    case '[':
        return 'x';
    case ']':
        return 'y';
    case '.':
        return 'z';
    
}
    return 'X';
}

void aleatorio::descodificar (){
    outputDescodificado,inputCodificado = "";
    std::string descodeKey;
    std::cout << "Insira: \n";
    std::cin >> inputCodificado;
    std::cout << "Insira a chave: \n";
    std::cin >> descodeKey;
    char indice = descodeKey[3];
    if (descodeKey[1] == '1'){
        for (char i : inputCodificado){
            outputDescodificado += aleatorio::alfa2ToLetter(i);
        }
        std::cout << "Descodificado: " << outputDescodificado << "\n";
    }


    else {

        outputDescodificado ="";
        std::string quaseDescosdificado = "";
        std::cout << "\n" << aleatorio::inputCodificado << "\n";
        for (char i : inputCodificado){
            quaseDescosdificado += aleatorio::descodificarJump(indice,i);
        }
        descodeNum(quaseDescosdificado);
        std::cout << "Quase descodificado: " << buceta << "\n";
        for (char i : buceta){
            outputDescodificado += aleatorio::descodeAlfa1(i); 
        }
        std::cout << outputDescodificado;
    }
}
char aleatorio::descodeAlfa1(char input){
     switch (input)
    {
    case 'z':
        return 'a';
    case 'y':
        return 'b';
    case 'x':
        return 'c';
    case 'w':
        return 'd';
    case 'v':
        return 'e';
    case 'u':
        return 'f';
    case 't':
        return 'g';
    case 's':
        return 'h';
    case 'r':
        return 'i';
    case 'q':
        return 'j';
    case 'p':
        return 'k';
    case 'o':
        return 'l';
    case 'n':
        return 'm';
    case 'm':
        return 'n';
    case 'l':
        return 'o';
    case 'k':
        return 'p';
    case 'j':
        return 'r';
    case 'i':
        return 's';
    case 'h':
        return 't';
    case 'g':
        return 'u';
    case 'f':
        return 'v';
    case 'e':
        return 'w';
    case 'd':
        return 'x';
    case 'c':
        return 'y';
    case 'b':
        return 'z';
    
}
    return 'X';
}
bool aleatorio::toBool(int x){
    if (x == 0)
        return true;
    
    return false;
}
char aleatorio::alfabeto_1(char input){
    switch (input)
    {
    case 'a':
        return '!';
    case 'b':
        return '@';
    case 'c':
        return '#';
    case 'd':
        return '$';
    case 'e':
        return '%';
    case 'f':
        return '8';
    case 'g':
        return '&';
    case 'h':
        return '*';
    case 'i':
        return '(';
    case 'j':
        return ')';
    case 'k':
        return '-';
    case 'l':
        return '+';
    case 'm':
        return '=';
    case 'n':
        return '6';
    case 'o':
        return '/';
    case 'p':
        return '|';
    case 'r':
        return ',';
    case 's':
        return '<';
    case 't':
        return '>';
    case 'u':
        return ':';
    case 'v':
        return '~';
    case 'w':
        return '^';
    case 'x':
        return '[';
    case 'y':
        return ']';
    case 'z':
        return '.';
    
}
    return 'X';
}
char aleatorio::alfabeto_2(char input){
    switch (input)
    {
    case 'a':
        return 'z';
    case 'b':
        return 'y';
    case 'c':
        return 'x';
    case 'd':
        return 'w';
    case 'e':
        return 'v';
    case 'f':
        return 'u';
    case 'g':
        return 't';
    case 'h':
        return 's';
    case 'i':
        return 'r';
    case 'j':
        return 'q';
    case 'k':
        return 'p';
    case 'l':
        return 'o';
    case 'm':
        return 'n';
    case 'n':
        return 'm';
    case 'o':
        return 'l';
    case 'p':
        return 'k';
    case 'r':
        return 'j';
    case 's':
        return 'i';
    case 't':
        return 'h';
    case 'u':
        return 'g';
    case 'v':
        return 'f';
    case 'w':
        return 'e';
    case 'x':
        return 'd';
    case 'y':
        return 'c';
    case 'z':
        return 'b';
    
}
    return 'X';
}