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