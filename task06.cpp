#include<iostream>
using namespace std;
main ()
{

int size_bag;
int cost_bag;
float area;
float cost_pound;
float cost_area;

cout << "Enter the size of the bag > ";
cin >> size_bag;
cout << "Enter the cost of the bag > ";
cin >> cost_bag;
cout << "Enter area covered by each bag per square feet > ";
cin >> area;

cost_pound = cost_bag / size_bag ;
cost_area = cost_bag / area;

cout << "Cost of fertiziler per pound = " << cost_pound << endl;
cout << "Cost of fertiziling the area per square feet = " << cost_area;

}