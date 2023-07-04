#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[] = "First, solve the problem. Then, write the code.";
    char buffer2[] = "Talk is cheap. Show me the code.";

    simple_print_buffer(buffer, 48);
    _memcpy(buffer+12, buffer2+10, 12);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 48);    
    return (0);
}
