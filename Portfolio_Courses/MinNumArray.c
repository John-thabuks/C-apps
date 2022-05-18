#include <stdio.h>
#include <stdlib.h>


//Findng the minimum number in an array by using a function

int min_Num(int arr[], int length);
int main()
{
    int array1[] = {133,23,54,87, 11, 6, 78,201};
    int array2[] = {123,435,119,736,66};

    int minArray1 = min_Num(array1, sizeof(array1)/sizeof(*array1));
    int minArray2 = min_Num(array2, sizeof(array2)/sizeof(*array2));
    
    printf("\n%d\n", minArray1);
    printf("\n%d\n", minArray2);
    return 0;
}
int min_Num(int arr[], int length)
{
    int min = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    return min;
}