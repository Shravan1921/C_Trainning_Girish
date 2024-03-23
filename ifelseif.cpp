// ifelseif.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	float basicSalary, HRA, DA, grossSalary;
	int grade;

	printf("Enter Basic Salary:");
	scanf_s("%f", &basicSalary);
	printf("Enter Grade (1,2,3,4,5): ");
	scanf_s("%f", &grade);

	if (grade == 1) {
		HRA = 0.05 * basicSalary;
		DA = 0.78 * basicSalary;
	}
	else if  (grade == 2) {
		HRA = 0.1 * basicSalary;
		DA = 0.08 * basicSalary;
	}
	else if (grade == 3) {
		HRA = 0.15 * basicSalary;
		DA = 0.1 * basicSalary;
	}
	else if (grade == 4) {
		HRA = 0.2 * basicSalary;
		DA = 0.15 * basicSalary;
	}
	else {
		printf("Invalid Grade:\n");
		return 1;
	}
	grossSalary = basicSalary + HRA + DA;

	printf("\n Basic Salary: %.2f\n", basicSalary);
	printf("Grade: % .2f\n", grade);
	printf("HRA: %.2f\n", HRA);
	printf("DA: %.2f\n", DA);
	printf("Gross Salary: %.2f\n", grossSalary);

	return 0;




}

