#include <iostream>
using namespace std;
main()
{
float matric;
float intermediate;
float Ecat;
float aggregate;
string name;
float matric_percentage;
float inter_percentage;
float Ecat_percentage;
float matric_weightage;
float inter_weightage;
float Ecat_weightage;
cout << "Enter name: ";
cin >> name;
cout << "Enter your matriculation marks: ";
cin >> matric;
cout << "Enter your inter marks: ";
cin >> intermediate;
cout << "Enter your Ecat marks: ";
cin >> Ecat;
matric_percentage = matric/1100*100;
inter_percentage =intermediate/550*100;
Ecat_percentage = Ecat/400*100;
matric_weightage= matric_percentage*10/100;
inter_weightage= inter_percentage*40/100;
Ecat_weightage= Ecat_percentage*50/100;
aggregate = matric_weightage + inter_weightage + Ecat_weightage;
cout << " Aggregate is " << aggregate ;
}
