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
	scanf_s("%c", &plaintext); //prompt for a character

	shifted = (plaintext - 'A') + 'a' - 5;
	printf("Your shifted character is: %c", shifted);//calculates and prints shifted character

	return 0; //indicates success
}