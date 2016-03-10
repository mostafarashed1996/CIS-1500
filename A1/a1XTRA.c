/*************************a1XTRA.c****************************
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
* Area of a Triangle
* By: Mostafa Rashed
* Assignment 1, Part 2 EXTRA - CIS 1500
* Last Modified: 25th September 2014
*/
#include <stdio.h>
/* Include math.h library for the square root function below*/
#include <math.h>

int main()
{
    /* Declare all the variables*/
    int usrdec;
    double farmAArea;
    double farmBArea;
    double farmCArea;
    double farmASide;
    double farmBSide;
    double farmCSide;
    double perimeterOfTriangle;
    double areaOfTriangle;
    double convertToMeters;
    /* Initilize all the variables*/
    usrdec = 0;
    farmAArea = 0;
    farmBArea = 0;
    farmCArea = 0;
    farmASide = 0;
    farmBSide = 0;
    farmCSide = 0;
    perimeterOfTriangle = 0;
    areaOfTriangle = 0;
    /* Value to convert Acres to meters squared (for easier calculations)*/
    convertToMeters = 4046.856;
    /* Ask the user for the area of each piece of land*/
    printf("Please enter the area of the first piece of land in acres: ");
    scanf("%lf", &farmAArea);
    printf("Please enter the area of the second piece of land in acres: ");
    scanf("%lf", &farmBArea);
    printf("Please enter the area of the third piece of land in acres: ");
    scanf("%lf", &farmCArea);
    /* Ask the user if he wants to enter it in meters squared or not*/
    printf("If you want your answer in meters squared, enter '1'. If you want it to remain in acres enter any other number: ");
    scanf("%d", &usrdec);
    /* If statement to present the user, if he selected 1 above, then convert it to meters squared*/
    if (usrdec == 1) 
    {
        /* Find the area of each square by converting the acres to meters squared*/
        farmAArea = farmAArea * convertToMeters;
        farmBArea = farmBArea * convertToMeters;
        farmCArea = farmCArea * convertToMeters;
    }
    /* Find the length of each side by finding the square root of the entire area*/
    farmASide = sqrt(farmAArea);
    farmBSide = sqrt(farmBArea);
    farmCSide = sqrt(farmCArea);
    /* Find the half peremeter of the triangle by adding the sides of the square together*/
    perimeterOfTriangle = (farmASide + farmBSide + farmCSide)/2;
    /* Use Heron's formula to find the area*/
    areaOfTriangle = sqrt(perimeterOfTriangle*(perimeterOfTriangle-farmASide)*(perimeterOfTriangle-farmBSide)*(perimeterOfTriangle-farmCSide));
    /* Present the information back to the user*/
    isnan (areaOfTriangle);
    printf("The area of the triangle that is between the 3 lands is: %.2f\n", areaOfTriangle);
    return(0);
}