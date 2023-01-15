#include <iostream>
using namespace std;
string checkTitle(float age,char gender);
main()
{
float age;
char gender;
string titleC;
cout <<"Enter age:";
cin >> age;
cout <<"Enter gender:";
cin >> gender;
titleC = checkTitle( age,gender);
cout << titleC;





}
string checkTitle(float age,char gender)
{

string titleC;
if (age >= 16)
{
 if (gender ='m')
 {
 titleC = "Mr.";
 }
}
else if (age <16)
{ 
 if (gender = 'm')
 {
 titleC = "master";             
 }
}
 else if (age >=16)
 { if (gender = 'f')  
 {titleC ="Ms."; 
}}
 else if (age < 16)
 { if (gender = 'f')
 {titleC = "Miss";     }}
 return titleC;






}
  