// token test.cpp : Testing inserting multiple values into a vector via a Token class
//

#include <iostream>
#include <vector>

using namespace std;

class Token {
public:
    char kind;
    double value;

    Token(char Kind, double Value) {
        kind = Kind;
        value = Value;
    }
};

vector<Token>tok;

int main()
{
    Token t('6',127);
    Token t2('12', 32);
    Token t3('+',0);
    Token t4('*', 0);
    
    
    tok.push_back(t);
    tok.push_back(t2);
    tok.push_back(t3);
    tok.push_back(t4);
    for (int i = 0; i < tok.size(); ++i) {
        cout <<"Kind "<< tok[i].kind << '\n';
        cout <<"Value "<< tok[i].value << '\n';
    }
   

}


