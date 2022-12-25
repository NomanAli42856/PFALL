#include<iostream>
using namespace std;
main ()
{
system("cls");

float ve_p_k;
float fr_p_k;
int kgs_ve;
int kgs_fr;
float ve_cn;
float fr_cn;
float total_cn;
float total;

cout << "Enter vegetable price per kilogram > ";
cin >> ve_p_k;
cout << "Enter fruit price per kilogram > ";
cin >> fr_p_k;
cout << "Enter total kilograms of vegetables > ";
cin >> kgs_ve;
cout << "Enter total kilograms of fruits > ";
cin >> kgs_fr;

ve_cn = ve_p_k * kgs_ve;
fr_cn = fr_p_k * kgs_fr;
total_cn = ve_cn + fr_cn;
total = total_cn / 1.94;

cout << "Vegetable cost = " << ve_cn << "coins" << endl; 
cout << "Fruit cost = " << fr_cn << "coins" << endl; 
cout << " Total : " << total_cn << "coins = " << total << "Rps" << endl;

}