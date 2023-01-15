#include <iostream>
using namespace std;
float holidaysPlay(int holidays, int weekends);
main ()
{
   string year;
   int holidays;
   int weekends;
   float finalplay;
   float annualplay;
   float total;
   cout <<"Enter year:";
   cin >> year;
   cout <<"Enter holidays:";
   cin >> holidays;
   cout <<"Enter weekends:";
   cin >> weekends;
   finalplay = holidaysPlay(holidays,weekends);
   cout <<finalplay;
   if (year == "leap")
   { annualplay = finalplay*15/100;
   
   cout << annualplay; }
   if (year == "normal")
   { annualplay = finalplay;
   cout << annualplay;}




}
float holidaysPlay(int holidays,int weekends)
{float remainH;
int weekend = 48;
int remainweekend;
float sofiaplay;
float yearplay;
remainH = holidays*2/3;
remainweekend = weekend - weekends;
sofiaplay = remainweekend*3/4;
yearplay = sofiaplay + remainH;
return yearplay;
}

















