/** lab19-01.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 19
* Purpose:
* ===========================================================
*/
#include "lab19functs.h"
#include <stdio.h>
#include <string.h>

int main() {
    //Ask the user for a string
    char str[MAX_STR_LEN];
    printf("Enter a string: ");
    scanf("%s", str);

    //Ask the user for a character to search for
    char searchChar;
    char replaceChar;
    printf("Enter a character to search for the replacement character: ");
    scanf("%c %c", &replaceChar, &searchChar);

    //Call the replaceCharInStr function
    replaceCharInStr(str, searchChar, replaceChar);

    return 0;
}