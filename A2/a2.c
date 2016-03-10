/*************************a2.c****************************
Student Name: Mostafa Rashed                        Student Number:  0901940
Date: 10th October 2014                          Course Name: CIS1500
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
* Rock, Paper, Sissors, Lizard, Spock!
* By: Mostafa Rashed
* Assignment 2 - CIS 1500
* Last Modified: 16th October 2014
*/
#include <stdio.h>
/* Include libraries that are needed to generate a number*/
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
    /* Declare all the variables*/
    int usrChoice;
    int cpuChoice;
    int i;
    int gameLength;
    int usrWins;
    
    int cpuWins;
    int draws;
    /* Initilize all the variables*/
    usrChoice = 0;
    cpuChoice = 0;
    gameLength = 0;
    usrWins = 0;
    cpuWins = 0;
    draws = 0;
    /* Ask the user how many times he/she wants to play*/
    printf("Welcome to Rock, Paper, Sissors, Spock!\n\nPlease enter how many times you want to play ");
    scanf("%d", &gameLength);
    /* Set up the Game Loop (for loop)*/
    for (i = 0; i < gameLength; i++) {
        printf("\nWhat's your move?\n(1) Rock\n(2) Paper\n(3) Sissors \n(4) Lizard \n(5) Spock\n");
        scanf("%d", &usrChoice);
        /* Check if the user made a valid choice*/
        while((!isdigit(usrChoice)) && (usrChoice < 1 || usrChoice > 5)) {
            printf("\nINVALID CHOICE. Please try again\n\nWhat's your move?\n(1) Rock\n(2) Paper\n(3) Sissors \n(4) Lizard \n(5) Spock\n");
            scanf("%d", &usrChoice);
        }
        /* Generate a number from 1-5*/
        srand(time(NULL)); 
        cpuChoice = (rand() % 5) + 1;

        /* Check if it's a draw first*/
        if (usrChoice == cpuChoice) {
            printf("It's a draw!");
            draws++;
        }
        /* If it isn't a draw check for a victory*/
        else {
            /* Switch statement*/
            switch (cpuChoice) {
                /* For each case, check the choice*/
                case 1:
                    printf("\nMy Choice is Rock\n");
                    if (usrChoice == 3 || usrChoice == 4) {
                        printf("You lost!\n");
                        cpuWins++;
                    }
                    else {
                        printf("You win!!\n");
                        usrWins++;
                    }
                    break;
                case 2:
                    printf("My Choice is Paper\n");
                    if (usrChoice == 1 || usrChoice == 5) {
                        printf("You lost!\n");
                        cpuWins++;
                    }
                    else {
                        printf("You win!!\n");
                        usrWins++;
                    }
                    break;
                case 3:
                    printf("My Choice is Sissors\n");
                    if (usrChoice == 2 || usrChoice == 4) {
                        printf("You lost!\n");
                        cpuWins++;
                    }
                    else {
                        printf("You win!!\n");
                        usrWins++;
                    }
                    break;
                case 4:
                    printf("My Choice is Lizard\n");
                    if (usrChoice == 2 || usrChoice == 5) {
                        printf("You lost!\n");
                        cpuWins++;
                    }
                    else {
                        printf("You win!!\n");
                        usrWins++;
                    }
                    break;
                /* Default switch statement to check if the number is equal to 5*/
                default:
                    printf("My Choice is Spock\n");
                    if (usrChoice == 1 || usrChoice == 3) {
                        printf("You lost!\n");
                        cpuWins++;
                    }
                    else {
                        printf("You win!!\n");
                        usrWins++;
                    }
            }
        }
    }
    /* Print out to the user*/
    printf("\n\nHere is your is the final score\nI have won %d game(s)\nI have lost %d game(s)\nand %d game(s) ended in a draw\nThanks for playing", usrWins, cpuWins, draws);
    return(0);
}