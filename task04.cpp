#include<iostream>
using namespace std;
main ()
{

int sub1;
int sub2;
int sub3;
int sub4;
int sub5;
float total;
float per;

cout << "Enter marks of first subject > ";
cin >> sub1;
cout << "Enter marks of second subject > ";
cin >> sub2;
cout << "Enter marks of third subject > ";
cin >> sub3;
cout << "Enter marks of fourth subject > ";
cin >> sub4;
cout << "Enter marks of fifth subject > ";
cin >> sub5;


total = sub1+sub2+sub3+sub4+sub5;
per = (total/500)*100;

cout << "Percentage  = " << per;


}