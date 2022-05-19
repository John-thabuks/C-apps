//Palindrome string is a string that is the same even when reversed.
//example abcdcba is a Palindrome
//Our job as the programmer is to check if a string is a Palindrome

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool fun_palidrome(char *sentence);
int main()
{
    char str1[] = "hello world";
    char str2[] = "abcdcba";

    if (fun_palidrome(str1) == true)
    {
        printf("\n%s\n",str1);
        printf("\t%s This is a palidrome\n", str1);
    }
    else
        printf("This is not a palidrome\n");

    printf("_______________________\n");
    if (fun_palidrome(str2) == true)
    {
        printf("\n%s\n",str2);
        printf("\t%s This is a palidrome\n", str2);
    }
    else
        printf("This is not a palidrome\n");
    
    return 0;
}

bool fun_palidrome(char *sentence)
{
    int centre = strlen(sentence)/2;
    int count_elements = strlen(sentence);

    for (int i = 0; i < centre; i++)
    {
        if (sentence[i] != sentence[count_elements-i - 1] )
        {
            return false;
        }
    }
    return true;
}