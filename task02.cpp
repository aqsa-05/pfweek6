#include <iostream>
using namespace std;
string equalnumber(int number1,int number2,int number3);
main()
{ int number1,number2,number3;
string result;
cout <<"Enter number1:";
cin >> number1;
cout <<"Enter number2:";
cin >> number2;
cout <<"Enter number3:";
cin >> number3;
result = equalnumber(number1,number2,number3);
cout << result;



}
string equalnumber(int number1,int number2,int number3)
{ 
    if (number1== number2 && number2==number3 && number3== number1)
{return "yes";}
 else
 {
    return "no";
 }
 return 0;
}


  