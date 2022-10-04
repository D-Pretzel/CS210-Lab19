#include <stdio.h>
#include <string.h>

#include "lab19functs.h"

/** lab19functs.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 19
* Purpose:
* ===========================================================
*/

void replaceCharInStr(char str[], char searchChar, char replaceChar) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == searchChar) {
            str[i] = replaceChar;
        }
    }
    printf("New string: %s", str);
}

void replaceMultiChar(char str[], char searchChars[], char replaceChar) {
    for (int i = 0; i < strlen(str); i++) {
        for (int j = 0; j < strlen(searchChars); j++) {
            if (str[i] == searchChars[j]) {
                str[i] = replaceChar;
            }
        }
    }
    printf("New string: %s", str);
}

int findLocations(char str[], int locations[], char searchChar) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == searchChar) {
            locations[count] = i;
            count++;
            printf("%c found at location %i\n", searchChar, i);
        }
    }
    return count;
}