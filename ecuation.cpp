#include "ecuation.h"

ecuation::ecuation():
    Operation(none),number1(0),number2(0) {}

ecuation::ecuation(std::string input):pars(input)
{
    Data temp = pars.Pars();
    number1 = temp.num1;
    number2 = temp.num2;
    this->setOperation(temp.sign);
}

ecuation::ecuation(double num1, double num2):
    number1(num1),number2(num2) {}

ecuation::ecuation(double num1, Sign oper, double num2):
    Operation(oper),number1(num1),number2(num2) {}

void ecuation::setOperation(Sign oper)
{
    Operation = oper;
}

void ecuation::setOperation(std::string temp)
{
    switch (temp[0]) {
    case '+':
        Operation =Sign::add;
        break;
    case '-':
        Operation=Sign::less;
        break;
    case '/':
        Operation=Sign::divide;
        break;
    case '*':
        Operation=Sign::multiply;
        break;
    }
}

double ecuation::GetResult()
{
    switch(Operation){
    case add:
        return (number1+number2);
        break;
    case less:
        return (number1-number2);
        break;
    case multiply:
        return (number1 * number2);
        break;
    case divide:
        return (number1/number2);
        break;
    case none:
        return 0;
    }
}

void ecuation::operator=(const std::string &input)
{
    pars.setStr(input);
    Data temp = pars.Pars();
    this->number1 = temp.num1;
    this->number2 = temp.num2;
    this->setOperation(temp.sign);
}
