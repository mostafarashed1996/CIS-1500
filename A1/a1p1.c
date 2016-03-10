/*************************a1.c****************************
Student Name: Mostafa Rashed                        Student Number:  0901940
Date: 26th September 2014                          Course Name: CIS1500
I have exclusive control over this submission via my password.
By including this statement in this header comment, I certify that:
     1) I have read and understood the University policy on academic integrity;
     2) I have completed the Computing with Integrity Tutorial on Moodle; and
     3) I have achieved at least 80% in the Computing with Integrity Self Test.
I assert that this work is my own. I have appropriately acknowledged any and all material
(data, images, ideas or words) that I have used, whether directly quoted or paraphrased.
Furthermore, I certify that this assignment was prepared by me specifically for this course.
****************************************************************************/
/*
* The Time Value of Money
* By: Mostafa Rashed
* Assignment 1, Part 1 - CIS 1500
* Last Modified: 26th September 2014
*/
#include <stdio.h>
/* Import the needed math lab. !!MAKE SURE TO COMPILE USING THE '-lm' CONDITION!!*/
#include <math.h>

int main()
{
    /* Declare Variables below*/
    double futureValue;
    int presentValue;
    int years;
    double intrestRate;
    int periodsPerYear;
    double intrestRatePerPeriod;
    int totalPeriods;
    /* Initililize Variables below*/
    futureValue = 0;
    presentValue = 0;
    years = 0;
    intrestRate = 0;
    periodsPerYear = 0;
    intrestRatePerPeriod = 0;
    totalPeriods = 0;
    /* Ask the user for the variables*/
    printf("Please enter the present value the your investment: ");
    scanf("%d", &presentValue);
    printf("Please enter the number of years: ");
    scanf("%d", &years);
    printf("Please enter the interest rate per year: ");
    scanf("%lf", &intrestRate);
    printf("Please enter the number of periods per year: ");
    scanf("%d", &periodsPerYear);
    /* Calculate the interest rate as a decimal for calculations*/
    intrestRate = intrestRate * 0.01;
    /* Calculate the interest rate per stated period*/
    intrestRatePerPeriod = intrestRate / periodsPerYear;
    /* Calculate the total periods across all the years specified*/
    totalPeriods = periodsPerYear * years;
    /* Calculate the future value given the equasion in the PDF for future value*/
    futureValue = presentValue * pow((1+intrestRatePerPeriod), totalPeriods);
    /* Print it back out for the user*/
    printf("\nThe future value of your investment is: $%.2lf\n", futureValue);
    return(0);
}