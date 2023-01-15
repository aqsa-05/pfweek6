#include <iostream>
using namespace std;
char calculategrade(int marks, char grade);
main()
{
int marks;
char grade;
char result;
cout <<"Enter marks:";
cin >> marks;
result = calculategrade( marks , grade);
cout << result;






}
char calculategrade(int marks ,char grade)
{
    
if (marks<=50)
{grade = 'F';
 return grade;
}
if (marks>50 && marks <=60)
{grade = 'E';
return grade;
}
if (marks>60 && marks <=70)
{
 grade = 'D';
 return grade;
 }
if (marks>70 && marks <=80)
{
    grade = 'C';
    return grade;
    }
if (marks>80 && marks <=85)
{grade = 'B';
return grade;
}
else 
{ grade = 'A';
return grade;
}

return grade;

}


  