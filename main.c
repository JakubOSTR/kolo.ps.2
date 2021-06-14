#include <stdio.h>
#include <stdlib.h>

void strncpy(char dest[], char src[])
{
    int i=0;
    while(src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
}

int main()
{
    char s1[] = "copy";
    char s2[] = "paste";
    strncpy(s1, s2);
    printf("strncpy: %s\n", s1);

    return 0;
}
