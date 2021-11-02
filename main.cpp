#include <iostream>
#include "ecuation.h"

using std::cout;
using std::endl;
using std::cin;

void StartMessage();
void FinishMessage();

int main()
{
   string str_input;
   ecuation ec;

   StartMessage();

   while(1){

       cout<<"input: ";
       cin>>str_input;

       if (str_input[0] == '%'){
           FinishMessage();
          return 0;
       }

       ec=str_input;
       cout<<"Result: "<<ec.GetResult()<<endl;
   }
}
void StartMessage(){
    cout<<"     ---------- This is a calculator ----------\n";
    cout<<"     -------- This is made by sherlok235 --------\n";
    cout<<"     ------------ For exit input % -------------\n";
}
void FinishMessage(){
    cout<<"By\n";
}
