#include <iostream>
using namespace std;
string checkspeed(float speed);
main()
{ 
    float speed;
    string result;
    cout <<"Enter speed:";
    cin >> speed;
    result = checkspeed(speed);
    cout << result;

}
string checkspeed(float speed)
{

if (speed <=10)
{ return "slow";}
if(speed>10 && speed <=50)
{return "average";}
if( speed >50 && speed <=150)
{return " fast";}
if (speed >150 && speed <=1000)
{return "ultra fast";}
else
{ return "extremely fast";}

return 0;



}




  