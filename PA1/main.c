/*
		Programming Assignment 1
		Name: Bailey Wolber
		Date: 1/18/2019
		Description: This program takes input from the user and calculates
					  7 formulas. These formulas can be found below

		Formulas: Newton’s Second Law of Motion
				  Volume of a cylinder
				  Character encoding
				  Distance between two points
				  Tangent
				  Total resistance of resistors in paralell
				  y = (2 / 3) - y + z * x / (a % 2) + PI 
*/
#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(void) {

	//First formula (Newton's second law)
	float mass = 0.0, acceleration = 0.0, force = 0.0; //set variables

	printf("Please enter the mass and acceleration for Newtons second law both as floating point values: ");
	scanf_s("%f%f", &mass, &acceleration);//prompt and get mass and acceleration values

	force = mass * acceleration;
	printf("Newton's Second Law: force = mass * acceleration = %f", force);//calculates and prints the force value

	/******************************************************************************************/


	//second formula (Volume of a cylinder)
	float radius = 0.0, height = 0.0, volume_cylinder = 0.0; //set variables

	printf("\n\nPlease enter the radius and height both as floating point values: ");
	scanf_s("%f%f", &radius, &height);//prompt and get radius and height values

	volume_cylinder = PI * (radius * radius) * height;
	printf("Volume of any cylinder is: V = PI * radius^2 * height = %f", volume_cylinder);//calculates and prints volume

	/******************************************************************************************/


	//third formula (Character Encoding)
	char plaintext, shifted;//set variables

	printf("\n\nPlease enter a single character: ");
	scanf_s(" %c", &plaintext); //prompt for a character

	shifted = (plaintext - 'A') + 'a' - 5;
	printf("Your shifted character is: %c", shifted);//calculates and prints shifted character

	/******************************************************************************************/

	//fourth formula (Distance between 2 points)
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	float distance = 0.0; //creates variables

	printf("\n\n Please enter 2 coordinates as integers (x1 y1 x2 y2): ");
	scanf_s("%d%d%d%d", &x1, &y1, &x2, &y2); //prompts for all 4 digits of the coordinates


	distance = (float)sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
	printf("The distance between the 2 inputed points is: %f units", distance); //calculates and prints the distance between the points

	/******************************************************************************************/

	//fifth formula (tangent)
	float theta = 0.0, tanTheta = 0.0; //creates variables

	printf("\n\n Please enter a value for Theta: ");
	scanf_s("%f", &theta); //prompts for the value of theta

	tanTheta = (float)sin(theta)/(float)cos(theta);
	printf("Tan(Theta) is: %f", tanTheta); //calculates and prints value of theta

	/******************************************************************************************/

	//sixth formula (Total resistance of resistors in paralell)
	int r1 = 0, r2 = 0, r3 = 0;
	float total_resistance = 0.0;

	printf("\n\nPlease enter 3 resistor values (R1 R2 R3): ");
	scanf_s("%d%d%d", &r1, &r2, &r3);

	total_resistance = (float)1 / ((float)1 / r1 + (float)1 / r2 + (float)1 / r3);
	printf("The value of the three resistors in parallel is: %f", total_resistance);

	/******************************************************************************************/

	return 0; //indicates success
}