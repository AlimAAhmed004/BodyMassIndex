// Write a program that calculates and displays a person's body mass index (BMI).
// The BMI is often used to determine whether a person is overweight or underweight for his or her height.
// A person's BMI is calculated with the following formula:
// BMI = weight * 703/height(power of 2)
// Optimal BMI = BMI is between 18.5 and 25
// Underweight = BMI is less than 18.5
// Overweught = BMI is greater than 25


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
   // input variables
	double BMI = 0;
	int weight, height;
	string message;
	cout << "Please enter your weight (pounds) and height (inchees): ";
	cin >> weight >> height;
	
	// equation
	BMI = weight * (703 / pow(height, 2));

	// possible outputs
	if (BMI < 18.5)
		message = "You are underweight";
	else if (BMI <= 25)
		message = "Your weight is optimal";
	else
		message = "You are overweight";
	cout << message << endl;









	return 0;
}