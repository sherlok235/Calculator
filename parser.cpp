#include "parser.h"

Parser::Parser():StrEcuation(""){}

Parser::Parser(std::string input_data):StrEcuation(input_data){}

void Parser::setStr(std::string input)
{
    this->StrEcuation=input;
}

Data Parser::Pars()
{
    Data temp;
    string num1="",num2="";
    bool first=false;
    int size =StrEcuation.size();
for(int i=0; i<size;i++){
    switch (StrEcuation[i]) {
    case '+':
    case '/':
    case '-':
    case '*':
        temp.sign=StrEcuation[i];
        first=true;
        break;
    default:
        if (!first){
        num1+=StrEcuation[i];
        }
        else{
            num2+=StrEcuation[i];
        }
        break;
    }
}
temp.num1=std::stod(num1);
temp.num2=std::stod(num2);

return temp;
}
