#ifndef EXPRESION_H
#define EXPRESION_H

#include "parser.h"

enum Sign {add=0,less,multiply,divide,none};

class expresion
{
private:
    Sign Operation=Sign::add;
    double number1,number2;
    Parser pars;
public:
    expresion();
    expresion(string input);
    expresion(double num1,double num2);
    expresion(double num1,Sign oper,double num2);

    void setOperation(Sign oper);
    void setOperation(string temp);

    double GetResult();

    void operator= (const string & input);

};

#endif // EXPRESION_H
