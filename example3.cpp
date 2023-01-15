#include <iostream>
using namespace std;
 int isGreatest(int number1,int number2,int number3 );
main()
{
    int number1;
    int number2;
    int number3;
    cout <<"Enter number1:";
    cin >> number1;
    cout << "Enter number2:";
    cin >> number2;
    cout <<"Enter number3:";
    cin >> number3;
    isGreatest(number1,number2,number3);

}
isGreatest(int number1,int number2,int number3 )
{int greatest;
if ( number1>number2 && number1> number3)
{ greatest= number1;}
 else if (number2> number3 && number2 > number1)
{greatest =  number2;}
 else if (number3>number1 && number3> number2)
{greatest = number3;}
else
{ greatest = number3;}
return greatest;
}