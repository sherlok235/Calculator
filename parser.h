#ifndef PARSER_H
#define PARSER_H

#include <iostream>


using std::string;

struct Data{
    double num1,num2;
    string sign;
};

class Parser
{
private:

    string StrExpresion;
public:
    Parser();
    Parser(string input_data);

    void setStr(string input);

    Data Pars ();


};

#endif // PARSER_H
