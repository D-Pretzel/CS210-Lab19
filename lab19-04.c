/** lab19-04.c
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

    //Get user search string
    char searchStr[MAX_STR_LEN];
    printf("Enter a string to search for: ");
    fgets(searchStr, MAX_STR_LEN, stdin);
    //Remove newline
    searchStr[strlen(searchStr) - 1] = '\0';

    //Call function
    int count = countSeqStr(str, searchStr);
    printf("There are %i occurrences of %s.\n", count, searchStr);

    return 0;
}