// Program 1: Write a C program to traverse and display the elements of an Array

#include <stdio.h>

int main()
{   
    int n;
    int arr[n];

    // Input array
        scanf("%d", n);
        for(int i = 0; i < n; ++i)
        {
        scanf("%d", &arr[i]);
        }
 
    printArray(arr, n);
 
    return 0;
}

// Function to traverse and print the array
void printArray(int* arr, int n)
{
    int i;
 
    printf("Array: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
