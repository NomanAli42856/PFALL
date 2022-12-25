#include<iostream>
using namespace std;
main ()
{

int vi;
int acc;
int time;
float vf;

cout << "Enter initail velocity > ";
cin >> vi;
cout << "Enter acceleration > ";
cin >> acc;
cout << "Enter time > ";
cin >> time;

vf = vi + acc*time;

cout << "Final velocity = " << vf;


}