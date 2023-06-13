#include <stdio.h>

int main(void)
{
    char text[68][40];
    int i;
    
    for (i=0; i<68; i++)
    {
        scanf("%s", text[i]);
    }
    for (i=0; i<68; i++)
    {
        printf("%s ", text[67 - i]);
    }
    return 0;
}
