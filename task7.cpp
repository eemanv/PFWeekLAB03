#include <iostream>
using namespace std;
main()
{
float mb;
float input;
float bits;
float output;
cout << " Enter Megabytes: ";
cin >> input;
output = input*1024*1024*8;
cout << " Conversion: " << output;
}