#include <iostream>
using namespace std;
float checkcost ( string city ,string product,int quantity );
main()
{
    float result;
    string city;
    string product;
    int quantity;
    cout <<"Enter city:";
    cin >> city;
    cout <<"Enter product:";
    cin >> product;
    cout <<"Enter quantity:";
    cin >> quantity;
    result = checkcost(city,product,quantity);
    cout <<"cost is "<< result;


}
float checkcost ( string city ,string product,int quantity )
{ float totalcost;
if( city == "sofia")
{if (product == "coffee")
{ totalcost = quantity*0.45;  
  return totalcost;             }
  
if (product == "water")
{ totalcost = quantity*0.80;  
  return totalcost;             }
if (product == "beer")
{ totalcost = quantity*1.20;  
  return totalcost;             }
  if (product == "sweets")
{ totalcost = quantity*1.45;  
  return totalcost;             }
  if (product == "peanut")
{ totalcost = quantity*1.60;  
  return totalcost;             }
}

if( city == "plovdiv")
{if (product == "coffee")
{ totalcost = quantity*0.40;  
  return totalcost;             }
  
if (product == "water")
{ totalcost = quantity*0.70;  
  return totalcost;             }
if (product == "beer")
{ totalcost = quantity*1.15 ;
  return totalcost;             }
  if (product == "sweets")
{ totalcost = quantity*1.30;  
  return totalcost;             }
  if (product == "peanut")
{ totalcost = quantity*1.50;  
  return totalcost;             }
}



if( city == " varna")
{if (product == "coffee")
{ totalcost = quantity*0.45;  
  return totalcost;             }
  
if (product == "water")
{ totalcost = quantity*0.70;  
  return totalcost;             }
if (product == "beer")
{ totalcost = quantity*1.10 ;
  return totalcost;             }
  if (product == "sweets")
{ totalcost = quantity*1.35;  
  return totalcost;             }
  if (product == "peanut")
{ totalcost = quantity*1.55;  
  return totalcost;             }

return 0;














}
}













