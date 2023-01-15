#include <iostream>
#include <cmath>
using namespace std;
float holidaysPlay(float holidays, float weekends);
main ()
{
   string year;
   float holidays;
   float weekends;
   float finalplay;
   float annualplay;
   float total;
   float totalplay;
   
   cout <<"Enter year:";
   cin >> year;
   cout <<"Enter holidays:";
   cin >> holidays;
   cout <<"Enter weekends:";
   cin >> weekends;
   
   finalplay = holidaysPlay(holidays,weekends);
   cout <<finalplay;
   
    if (year == "leap")
    { 
        annualplay = (finalplay*0.15); 
        totalplay = finalplay+ annualplay;

       cout << totalplay  << endl; 
    }
   if (year == "normal")
   { 
        annualplay = finalplay;
        cout << annualplay << endl;
   }




}
float holidaysPlay(float holidays,float weekends)
{
    float remainH;
float weekend = 48;
float remainweekend=0;
float sofiaplay;
float yearplay;
float yearplayf;
 

remainH = (holidays*0.6);
cout << remainH<<endl;

remainweekend = weekend - weekends;
cout << remainweekend<<endl;

sofiaplay = (remainweekend*0.75);
cout << sofiaplay<<endl;

yearplay = sofiaplay + remainH;
cout << yearplay<<endl;
yearplayf = floor(yearplay);
cout << yearplayf << endl;


return yearplay;
}

















