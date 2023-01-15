#include <iostream>
using namespace std;
float totalincome(string screen ,int rows,int columns);
main()
{ int rows;
int columns;
string screen;
float result;
cout <<"Enter rows:";
cin >> rows;
cout <<"Enter columns:";
cin >> columns;
cout <<"Enter screen:";
cin >> screen;
result = totalincome(screen,rows,columns);
cout << result;




}
float totalincome(string screen ,int rows,int columns)
{
    float total;
if (screen =="premiere")
{total = rows*columns*12;
return total;}
if (screen == "normal")
{ total = rows*columns*7.50;
return total;}
return 0;










}





  