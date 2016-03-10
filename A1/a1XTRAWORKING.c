/*
* The Time Value of Money
* By: Mostafa Rashed
* Assignment 1, Part 1 - CIS 1500
* Last Modified: 25th September 2014
*/
#include <stdio.h>
#include <math.h>

int main()
    // Value to convert Acres to meters squared (for easier calculations)
    double convertToMeters = 4046.856;
    // Find the area of each square by converting the acres to meters squared
    double farmAArea = 370 * convertToMeters;
    double farmBArea = 116 * convertToMeters;
    double farmCArea = 74 * convertToMeters;
    // Find the length of each side by finding the square root of the entire area
    double farmASide = sqrt(farmAArea);
    double farmBSide = sqrt(farmBArea);
    double farmCSide = sqrt(farmCArea);
    // Find the peremeter of the triangle by adding the sides of the square together
    double perimeterOfTriangle = (farmASide + farmBSide + farmCSide)/2;
    // Use Hermon's formula to find the area
    double areaOfTriangle = sqrt(perimeterOfTriangle*(perimeterOfTriangle-farmASide)*(perimeterOfTriangle-farmBSide)*(perimeterOfTriangle-farmCSide));
    printf("The area of the triangle that is between the 3 lands is: %.2f meters\n", areaOfTriangle);
    return(0);
}