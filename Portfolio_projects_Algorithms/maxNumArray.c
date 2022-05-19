#include <stdio.h>
#include <stdlib.h>

//We will write an app to find the maximum number in C
//use array pointer.
int func_Max_Array(int *arr, int length);
int main()
{
    int arr1[] ={35,88,667,379,732,198,736};
    int arr2[] = {637,731,7902,939,9020};

    int firstArray = func_Max_Array(arr1, sizeof(arr1)/sizeof(*arr1));
    int secondArray = func_Max_Array(arr2, sizeof(arr2)/sizeof(*arr2));
    
    printf("\nMaximum number in array1 is %d\n", firstArray);
    printf("\nMaximum number in array2 is %d\n", secondArray);
}
int func_Max_Array(int *arr, int length)
{
    int max = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}