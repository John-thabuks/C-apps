//Here we will just have the [comand] and [argument]
#include <stdio.h>


int main(void)
{
    char c;
    c = getchar();  //returns input as a single character.
    
    while (c != '\n')
    {
        putchar(c);
        c = getchar();
    }
    printf("\n");
    return 0;
}

//Here when you use gcc unix.c -o unix 
//you insert the sentence you wish, it will be printed out.