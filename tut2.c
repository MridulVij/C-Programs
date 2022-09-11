
//#include<stdio.h>
//#include<conio.h>
// code to calculate 2 numbers in addition, susbtraction, multiplication, division,
/*
int main()
{
    int num1, num2, sum;
    printf("Enter 2 Numbers to Calculate = ");
    scanf("%d%d", &num1, &num2);
    sum = num1+num2;
    printf("\nAddition = %d", sum);
    sum = num1-num2;
    printf("\nSubstracton = %d", sum);
    sum = num1/num2;
    printf("\nDivide = %d", sum);
    sum = num1*num2;
    printf("\nMultiplication = %d", sum);
    sum = num1%num2;
    printf("\nModulas = %d", sum);

}
*/
//
#include <iostream>
using namespace std;
// code for calculator in which +, -, *, / dezired output will be printed.
int main() {

  char op;
  double first, second;
  cout<<"Enter an operator/Symbols (+, -, *, /): ";
  cin>>op;
  cout<<"Enter two Numbers/Operands: ";
  cin>>first>>second;

  switch (op) {
    case '+':
       cout<<"\n"<<first<<" + "<<second<<"\n"<<endl;
      break;
    case '-':
       cout<<"\n"<<first<<" - "<<second<<"\n"<<endl;
      break;
    case '*':
       cout<<"\n"<<first<<" * "<<second<<"\n"<<endl;
      break;
    case '/':
      cout<<"\n"<<first<<" / "<<second<<"\n"<<endl;
      break;
    // operator doesn't match any case constant
    default:
      cout<<"\nError! operator is not correct\n";
  }
}
//
