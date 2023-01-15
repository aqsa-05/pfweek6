#include <iostream>
using namespace std;
main()
{
    string brand;
int price;
cout <<"Enter price:";
cin >> price;
cout <<"Enter brand:";
cin >> brand;
if(price <=1500 && brand == "j.") 
{ cout <<"Buy the dress";                           }
if (price > 1500 && brand != "j." )
{  cout << "do not buy the dress" ;                }

}