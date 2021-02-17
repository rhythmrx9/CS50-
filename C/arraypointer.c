#include <stdio.h>

int main()
{

    int n;
    int data[n];
    
    printf("Enter number of elements; ");
    scanf("%d", n)

    printf("Enter elements: ");
    for (int i = 0; i < n; ++i)
        scanf("%d", data + i);

    printf("You entered: \n");
    for (int i = 0; i < n; ++i)
        printf("%d\n", *(data + i));
        
    return 0;
}
