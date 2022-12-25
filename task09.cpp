#include<iostream>
using namespace std;
main ()
{
system("cls");

int num;
int dig1;
int dig2;
int dig3;
int dig4;
int total;

cout << "Enter the number > ";
cin >> num ;

dig1 = num % 10;
dig2 = (num/10)%10;
dig3 = (num/100)%10;
dig4 = (num/1000)%10;
total = dig1 + dig2 + dig3 + dig4;

cout << "Output : " << total;


}