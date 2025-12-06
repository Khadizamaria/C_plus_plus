#include<iostream>
#include "Calculator.h"
using namespace std;
int main()
{
   double num1,num2;
   char operation;
   cout<<"Enter ur 1st number :"<<endl;
   cin>>num1;

   cout<<"Enter an operation(+,-,*,/)"<<endl;
   cin>>operation;
   cout<<"Enter ur 2nd number:"<<endl;
   cin>>num2;

   double result;
  if(operation =='+')
{
  result = num1+num2;

}else if(operation == '-')
{
    result=num1-num2;
}else if(operation =='*')
{
    result=num1*num2;
}else if(operation =='/')
{
    if(num2 !=0)
    result=num1/num2;
}
else{
    cout<<"Error";
    return 1;
}
    cout << "Result:" << result << endl;

    return 0;
}