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
	scanf_s("%d", &grade);

	if (grade == 1) {
		HRA = 0.05 * basicSalary;
		if (HRA > 2000)
			HRA = 2000;
		DA = 0.78 * basicSalary;
		if (DA > 3000);
		    DA = 3000;

	}
	else if (grade == 2) {
		HRA = 0.10 * basicSalary;
		if (HRA > 3000)
			HRA = 3000;
		DA = 0.08 * basicSalary;
		if (DA > 3500);
			DA = 3500;
	}
	else if (grade == 3) {
		HRA = 0.15 * basicSalary;
		if (HRA > 4000)
			HRA = 4000;
		DA = 0.10 * basicSalary;
		if (DA > 4000);
			DA = 4000;
	}
	else if (grade == 4) {
		HRA = 0.20 * basicSalary;
		if (HRA > 5000)
			HRA = 5000;
		DA = 0.15 * basicSalary;
		if (DA > 5000);
			DA = 5000;	
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

