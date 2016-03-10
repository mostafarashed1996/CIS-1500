/*************************a3.c****************************
Student Name: Mostafa Rashed                        Student Number:  0901940
Date: 30th October 2014                          Course Name: CIS1500
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
* Nim
* By: Mostafa Rashed
* Assignment 3 - CIS 1500
* Last Modified: 30th October 2014
*/
#include <stdio.h>
/* Prototype Functions*/
void playNim(int rowOneRocks, int rowTwoRocks, int rowThreeRocks);
void drawNim(int rowA, int rowB, int rowC);

int main()
{
    /* Declare all the variables*/
    int rowOneRocks;
    int rowTwoRocks;
    int rowThreeRocks;
    /* Initialize all the variables*/
    rowOneRocks = 0;
    rowTwoRocks = 0;
    rowThreeRocks = 0;
    /* Ask a user how many rocks he wants in each row*/
    printf("Enter the number of rocks in each row seperated by a space: ");
    scanf("%d %d %d", &rowOneRocks, &rowTwoRocks, &rowThreeRocks);
    playNim(rowOneRocks, rowTwoRocks, rowThreeRocks);
    return(0);
}
void playNim(int rowOneRocks, int rowTwoRocks, int rowThreeRocks) {
    int i = 0;
    int j = 0;
    int rockCount = 0;
    int player = 2;
    rockCount = rowOneRocks + rowTwoRocks + rowThreeRocks;
    while (rockCount != 0) {
        drawNim(rowOneRocks, rowTwoRocks, rowThreeRocks);
        if (player == 1)
            player = 2;
        else
            player = 1;
        printf("Player %d - Row and number of rocks: ", player);
        scanf("%d %d", &i, &j);
        switch(i) {
            case 1:
                while (j > rowOneRocks) {
                    printf("Invalid Input. Please try again: ");
                    scanf("%d %d", &i, &j);
                    continue;
                }
                for (int k = 0; k<j; k++) {
                    rowOneRocks--;
                }
                break;
            case 2:
                while (j > rowTwoRocks) {
                    printf("Invalid Input. Please try again: ");
                    scanf("%d %d", &i, &j);
                    continue;
                }
                for (int k = 0; k<j; k++) {
                    rowTwoRocks--;
                }
                break;
            case 3:
                while (j > rowThreeRocks) {
                    printf("Invalid Input. Please try again: ");
                    scanf("%d %d", &i, &j);
                    continue;
                }
                for (int k = 0; k<j; k++) {
                    rowThreeRocks--;
                }
                break;
            default:
                printf("Invalid Input. Please try again: ");
                scanf("%d %d", &i, &j);
                continue;
        }
        rockCount = rowOneRocks + rowTwoRocks + rowThreeRocks;
    }
    printf("Player %d wins!!\n", player);

}
void drawNim(int rowA, int rowB, int rowC) {
    printf("Row 1: ");
    for (int i = 0; i < rowA; i++)
        printf("%c", 79);
    printf("\nRow 2: ");
    for (int i = 0; i < rowB; i++)
        printf("%c", 79);
    printf("\nRow 3: ");
    for (int i = 0; i < rowC; i++)
        printf("%c", 79);
    printf("\n\n");
}