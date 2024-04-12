#include<stdio.h>
#include<assert.h>

int my_strlen(const char *str)
{
    assert(str != NULL);
    if(*str != '\0')
        return 1+my_strlen(str+1);
    else
        return 0;
}

/*
int my_strlen(char* str)
{
     char* start = str;
     cahr* end = str;
     while(*end != '\0')
     {
     end++;
     }
     return end - start;
}
*/

int main()
{
    char arr[] = "abcdef";
    int len = my_strlen(arr);
    printf("%d\n", len);

    return 0;
}
