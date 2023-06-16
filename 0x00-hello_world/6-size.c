#include <stdio.h>

int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longIntSize = sizeof(long int);
	int longLongIntSize = sizeof(long long int);
	int floatSize = sizeof(float);
	
	printf("Size of a char: %i bytes(s)\n", charSize);
	printf("Size of an int: %i bytes(s)\n", intSize);
	printf("Size of a lomg int: %i bytes(s)\n", longIntSize);
	printf("Size of a long long int: %i bytes(s)\n", longLongIntSize);
	printf("Size of a float: %i bytes(s)\n", floatSize);
	
	return (0);
}
