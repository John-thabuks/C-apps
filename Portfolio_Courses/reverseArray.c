#include <stdio.h>

//How to revers the elements in an array.
int func_reverse(int *arr, int length);
int main()
{
    int arr[] ={1,2,3,4,5,6,7,8,9};
    int arr2[] = {37,03,73,78,12,11};
    func_reverse(arr, (sizeof(arr)/sizeof(*arr)));
    func_reverse(arr2, sizeof(arr2)/sizeof(*arr2));
    
    for (int i = 0; i < sizeof(arr)/sizeof(*arr); i++)
    {
        printf("\n The reverse of our array is %d", arr[i]);
    }
    
    for (int i = 0; i < sizeof(arr2)/sizeof(*arr2); i++)
    {
        printf("\nThe reversed array2: %d\n", arr2[i]);
    }
    
    return 0;
}
int func_reverse(int *arr, int length)
{
    int temp =0;
    for (int i = 0; i < length/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[length - i -1];
        arr[length -i -1] = temp;
    }
    for (int i = 0; i < length; i++)
    {
        return arr[i];
    }
    
}