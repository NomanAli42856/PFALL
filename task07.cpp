#include<iostream>
using namespace std;
main ()
{

string moive;
int atp;
int ctp;
int ats;
int cts;
int per_don;
int total;
float donation;
float afterdonation;

cout << "Enter name of the moive > ";
cin >> moive;
cout << "Enter Adult ticket price > ";
cin >> atp;
cout << "Enter Child ticket price > ";
cin >> ctp;
cout << "Enter number of Adult ticket sold > ";
cin >> ats;
cout << "Enter number of Child ticket sold > ";
cin >> cts;
cout << "Enter percentage to donate > ";
cin >> per_don;

total = (atp*ats)+(ctp*cts);
donation = (per_don*total)/100;
afterdonation = total - donation;

cout << "Total amount generated ="  << total << endl;
cout << "Amount after donation =" << afterdonation;


}