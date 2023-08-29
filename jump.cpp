#include "cifraAleatoria.hpp"
#include <cstdlib>

char aleatorio::descodificarJump(char indice, char letra){
    if (indice == '1'){
        switch (letra)
    {
    case '1':
        return '1';
    case '2':
        return '2';
    case '3':
        return '3';
    case '4':
        return '4';
    case '5':
        return '5';    
    case 'a':
        return 'z';
    case 'b':
        return 'a';
    case 'c':
        return 'b';
    case 'd':
        return 'c';
    case 'e':
        return 'd';
    case 'f':
        return 'e';
    case 'g':
        return 'f';
    case 'h':
        return 'g';
    case 'i':
        return 'h';
    case 'j':
        return 'i';
    case 'k':
        return 'j';
    case 'l':
        return 'k';
    case 'm':
        return 'l';
    case 'n':
        return 'm';
    case 'o':
        return 'n';
    case 'p':
        return 'o';
    case 'r':
        return 'p';
    case 's':
        return 'r';
    case 't':
        return 's';
    case 'u':
        return 't';
    case 'v':
        return 'u';
    case 'w':
        return 'v';
    case 'x':
        return 'w';
    case 'y':
        return 'x';
    case 'z':
        return 'y';
    }
    }
    if (indice == '2'){
        switch (letra)
    {
            case '1':
        return '1';
    case '2':
        return '2';
    case '3':
        return '3';
    case '4':
        return '4';
    case '5':
        return '5';
    case 'a':
        return 'y';
    case 'b':
        return 'z';
    case 'c':
        return 'a';
    case 'd':
        return 'b';
    case 'e':
        return 'c';
    case 'f':
        return 'd';
    case 'g':
        return 'e';
    case 'h':
        return 'f';
    case 'i':
        return 'g';
    case 'j':
        return 'h';
    case 'k':
        return 'i';
    case 'l':
        return 'j';
    case 'm':
        return 'k';
    case 'n':
        return 'l';
    case 'o':
        return 'm';
    case 'p':
        return 'n';
    case 'r':
        return 'p';
    case 's':
        return 'q';
    case 't':
        return 'r';
    case 'u':
        return 's';
    case 'v':
        return 't';
    case 'w':
        return 'u';
    case 'x':
        return 'v';
    case 'y':
        return 'w';
    case 'z':
        return 'x';
    }
    }
    if (indice == '3'){
        switch (letra)
    {
            case '1':
        return '1';
    case '2':
        return '2';
    case '3':
        return '3';
    case '4':
        return '4';
    case '5':
        return '5';
    case 'a':
        return 'x';
    case 'b':
        return 'y';
    case 'c':
        return 'z';
    case 'd':
        return 'a';
    case 'e':
        return 'b';
    case 'f':
        return 'c';
    case 'g':
        return 'd';
    case 'h':
        return 'e';
    case 'i':
        return 'f';
    case 'j':
        return 'g';
    case 'k':
        return 'h';
    case 'l':
        return 'i';
    case 'm':
        return 'j';
    case 'n':
        return 'k';
    case 'o':
        return 'l';
    case 'p':
        return 'm';
    case 'r':
        return 'o';
    case 's':
        return 'p';
    case 't':
        return 'q';
    case 'u':
        return 'r';
    case 'v':
        return 's';
    case 'w':
        return 't';
    case 'x':
        return 'u';
    case 'y':
        return 'v';
    case 'z':
        return 'w';
    }
    }
    return 'X';
}


std::string aleatorio::pularLetra(std::string input,int indice){
    char chave;
    if (indice == 1)
        chave = '1';

    if (indice == 2)
        chave = '2';

    if (indice == 3)
        chave = '3';

    aleatorio::key += "i";
    aleatorio::key += chave;
    std::string retorno = "";
    int x = 0;
    int y[20] = {0};
    for (char i : input){
        if (i == '1' || i =='2' || i == '3' || i == '4' || i == '5'){
            retorno += i;
            y[x] = i;}
        else {
        y[x] = aleatorio::letterToNum(i) + indice;
        retorno += aleatorio::numToLetter(y[x]);
        }
        x++;
    }
    return retorno;
}