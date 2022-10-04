/** lab19-03.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 19
* Purpose:
* ===========================================================
*/
#include <stdio.h>
#include <string.h>
#include "lab19functs.h"

int main() {
    //Get user string
    char str[MAX_STR_LEN];
    printf("Enter a string: ");
    fgets(str, MAX_STR_LEN, stdin);
    //Remove newline
    str[strlen(str) - 1] = '\0';

    //Get user search character
    char searchChar;
    printf("Enter a character to search for: ");
    scanf("%c", &searchChar);

    //Count number of occurrences of search character
    int locations[MAX_STR_LEN];
    int count = findLocations(str, locations, searchChar);

    //Call function
    printf("There are %i occurrences of %c", count, searchChar);
    return 0;
}