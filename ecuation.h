#ifndef ECUATION_H
#define ECUATION_H

#include "parser.h"

enum Sign {add=0,less,multiply,divide,none};

class ecuation
{
private:
    Sign Operation=Sign::add;
    double number1,number2;
    Parser pars;
public:
      ecuation();
      ecuation(string input);
      ecuation(double num1,double num2);
      ecuation(double num1,Sign oper,double num2);

      void setOperation(Sign oper);
      void setOperation(string temp);

      double GetResult();

      void operator= (const string & input);

};

#endif // ECUATION_H
