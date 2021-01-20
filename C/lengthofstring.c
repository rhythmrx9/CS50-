#include <stdio.h>
#include <string.h>

int main() 
{
    char string[100];
    int i;
    
    scanf("%s", string);

    for (i = 0; string[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}