#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>  // header file where printf and scanf functions are defined
int main()
{
    char clubNumber[10];  // variable, character array, for storing the club number

    printf("Hello, what is your club number?   ");
    scanf("%s", clubNumber);  // reading the club number from the user
    printf("\nClub %s is good at programming.\n", clubNumber); // printing a response message

    return 0;
}