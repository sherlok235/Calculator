#include "parser.h"

Parser::Parser():StrExpresion(""){}

Parser::Parser(std::string input_data):StrExpresion(input_data){}

void Parser::setStr(std::string input)
{
    this->StrExpresion=input;
}

Data Parser::Pars()
{
    Data temp;
    string num1="",num2="";
    bool first=false;
    int size =StrExpresion.size();
    for(int i=0; i<size;i++){
        switch (StrExpresion[i]) {
        case '+':
        case '/':
        case '-':
        case '*':
            temp.sign=StrExpresion[i];
            first=true;
            break;
        default:
            if (!first){
            num1+=StrExpresion[i];
            }
            else{
                num2+=StrExpresion[i];
            }
            break;
        }
    }
    temp.num1=std::stod(num1);
    temp.num2=std::stod(num2);

    return temp;
}
