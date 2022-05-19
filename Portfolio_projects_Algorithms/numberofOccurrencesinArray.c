#include <stdio.h>

//What is the number of occurences of a particular number within an array 
int func_occurrence(int *arr, int length, int value_to_find);
int main()
{
    int arr[] = {7,4,8,0,9,8,2,6,8};
    int val = func_occurrence(arr,(sizeof(arr)/sizeof(*arr)), 8);

    printf("# of counts in 8 are: %d\n", val);
}
int func_occurrence(int *arr, int length, int value_to_find)
{
    int count =0;
    //int x = value_to_find;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == value_to_find)
        {
            count++;
        }
        
    }
    return count;
}