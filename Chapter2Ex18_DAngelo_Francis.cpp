/*
TITLE: Chapter 2 Exercise 18 - Energy Drink Consumption
FILE NAME: Chapter2Ex18_DAngelo_Francis.cpp
PROGRAMMER: D'Angelo Francis
DATE: 09/2024
REQUIREMENTS: A soft drink company recently surveyed 16,500 of its customers and found that approximately 
15 percent of those surveyed purchase one or more energy drinks per week. Of those customers who purchase 
energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that 
displays the following:

• The approximate number of customers in the survey who purchase one or more energy drinks per week.

• The approximate number of customers in the survey who prefer citrus-flavored energy drinks.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises 
your code so that the user can enter the number of customers that were surveyed.
*/

#include <iostream>
using namespace std;


int main()
{
	double customerTotal;
	cout << "Enter the number of customers that were surveyed: " << endl;
	cin >> customerTotal;

	double customerEnergyDrinks = customerTotal * 0.15;
	double customerCitrus = customerEnergyDrinks * 0.58;

	cout << "The number of customers in the survey who purchase one or more energy drinks per week: " << customerEnergyDrinks << endl;
	cout << "The number of customers in the survey who prefer citrus-flavored energy drinks: " << customerCitrus << endl;
	return 0;

}
