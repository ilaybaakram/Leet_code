#include <stdio.h>
#include <string.h>

int value(char ch);
int roman(char s[]);

int main()
{
    char s[15];
    fgets(s, sizeof s, stdin);
    int result = roman(s);

    printf("%d\n", result);
}
int roman(char s[])
{
    int total = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        int now = value(s[i]);
        int next = value(s[i+1]);

        if (now < next)
        {
            total -= now;
        }
        else
        {
            total += now;
        }
    }
    return total;
}
int value(char ch)
{
    switch (ch)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
}