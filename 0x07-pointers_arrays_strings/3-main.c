#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

    printf("%u\n", (int) _strspn("First, solve the problem. Then, write the code.", "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    printf("%u\n", _strspn("abcdef", ""));
    printf("%u\n", _strspn("First, solve the problem. Then, write the code.", "[]{}()"));
    return (0);
}
