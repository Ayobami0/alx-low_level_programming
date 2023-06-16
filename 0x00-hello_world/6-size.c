#include <stdio.h>

int main(void) {
  int charSize = sizeof(char);
  int intSize = sizeof(int);
  int longIntSize = sizeof(long int);
  int longLongIntSize = sizeof(long long int);
  int floatSize = sizeof(float);

  printf("Size of a char: %i byte(s)\n", charSize);
  printf("Size of an int: %i byte(s)\n", intSize);
  printf("Size of a long int: %i byte(s)\n", longIntSize);
  printf("Size of a long long int: %i byte(s)\n", longLongIntSize);
  printf("Size of a float: %i byte(s)\n", floatSize);

  return (0);
}
