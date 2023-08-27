#include <cstring>
#include "classes.hpp"
int cesar::letterToNum(char letter){
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
char cesar::numToLetter(int num){
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
std::string cesar::lowerCase(std::string str){
    std::string lowecase = "";
    for (int x : str){
        lowecase += tolower(x);
    }
    return lowecase;
}
void cesar::codificar(){
    int x = 0;
    int arr[20] = {0};
    std::cout << "Insira a palavra: \n";
    std::cin >> cesar::input;
    cesar::input = cesar::lowerCase(cesar::input);
    for (char i : cesar::input){
        arr[x] = letterToNum(i) + 3;
        cesar::output += numToLetter(arr[x]);
        x++;
    } 
    std::cout << cesar::output;
}
void cesar::descodificar(){
    int x = 0;
    int arr[20] = {0};
    std::cout << "Insira a palavra: \n";
    std::cin >> cesar::input;
    cesar::input = cesar::lowerCase(cesar::input);
    for (char i : cesar::input){
        arr[x] = letterToNum(i) - 3;
        cesar::output += numToLetter(arr[x]);
        x++;
    } 
    std::cout << cesar::output;
}