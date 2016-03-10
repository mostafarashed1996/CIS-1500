/*************************a4.c****************************
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
#include <stdio.h>
#include <strings.h>
#include <ctype.h>

// Function Prototype
void check4pangram(char sentence[]);
void missingLetters(int alpha[]);
void isTautogram(char sentence[]);

// Main function
int main() {
    // Initialize variables
    int i;
    char sentence[100];
    i = 0;
    printf("Enter your sentence: ");
    fgets(sentence, 100, stdin);
    printf("The sentence is: ");
    // Print it back to the user
    while ((int)(sentence[i]) != 0) {
        printf("%c", sentence[i]);
        i = i + 1;
    }
    // Call the panagram and tautogram function checkers
    check4pangram(sentence);
    isTautogram(sentence);
    printf("\n");
    return(0);
}
// This function takes the sentence from the user and sees if it is indeed a pangram or not
void check4pangram(char sentence[]) {
    // Initialize variables
    int alpha[26];
    int i;
    int currentAscii;
    currentAscii = 0;
    for (i = 0; i < 26; i++) {
        alpha[i] = 0;
    }
    i = 0;
    // While loop to search throughout the sentence for each letter to be present
    while ((int)(sentence[i]) != 0) {
        currentAscii = (int)(tolower(sentence[i]));
        if (currentAscii >= 97 && currentAscii <= 122) {
            alpha[currentAscii - 97] = 1;
        }
        i = i + 1;
    }
    // Call the missing functions array
    missingLetters(alpha);
}
// This function takes the array from the previous function and tries to print the missing letters
void missingLetters(int alpha[]) {
    // Initialize variables
    int i;
    int missingCounter;
    missingCounter = 0;
    // If a letter isn't present count it
    for (i = 0; i < 26; i++) {
        if (alpha[i] == 0)
            missingCounter = missingCounter + 1;
    }
    // If it isn't a panagram, print out the missing letters
    if (missingCounter > 0) {
        printf("The following %d letter(s) are missing: ", missingCounter);
        for (i = 0; i < 26; i++) {
            if (alpha[i] == 0)
                printf("%c ", (char)(i+97));
        }
    }
    else
        printf("The sentence is a Panagram!");
}
// This is the function for the other 20%, this checks if the sentence is a panagram
void isTautogram(char sentence[]) {
    // Initialize variables
    int beggining;
    int currentAscii;
    int i;
    char compare;
    // Lower the first letter in the sentence to compare it to the rest
    compare = tolower(sentence[0]);
    currentAscii = 0;
    beggining = 1;
    i = 0;
    // While it's not at the end...
    while ((int)(sentence[i+1]) != 0) {
        currentAscii = (int)(tolower(sentence[i]));
        // Checks if the current character is a letter
        if (currentAscii >= 97 && currentAscii <= 122) {
            // Checks if it's at the beginning of the array
            if (beggining == 1) {
                // If it's not the same, if not, then break out of it
                if ((int)compare != currentAscii)
                    break;
                beggining = 0;
            }
        }
        else 
            beggining = 1;
        i = i + 1;
    }
    // If it's not a tautogram print it out to the user
    if (beggining == 1)
        printf("\nIt is not a tautogram");
    else
        printf("\nIt is a tautogram");
}