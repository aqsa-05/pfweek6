#include <iostream>
using namespace std;
float discountedAmount( float discount,string day, string month);
main()
{
int amount;
float result;
string day;
string month;
float discount;
cout <<"Enter month:";
cin >> month;
cout <<"Enter day:";
cin >> day;
cout <<"Enter amount:";
cin >> amount;
 result =  discountedAmount (discount, day,month );
 cout << result;

}
float discountedAmount( float discount,string day, string month)
{ int amount;
float payable;
    if (day == "sunday" && month == "october")
  {  discount = (amount *10)/100;
  payable = amount -discount;  
                          }
    else if (day =="sunday "|| month !="october" )
    { discount = (amount*5)/100;
    payable = amount - discount;
    }

return payable;















}