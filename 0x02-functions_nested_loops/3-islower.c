/**
* _islower - checks if a char is in lowercase
* Checks if a character is in lowercase letter and
* returns 1 if is and 0 if not
* @c: The character to check
*
* Return: int 0 if not lower
* and 1 if lower
*/
int _islower(int c)
{
	if (c < 123 && c > 97)
	{
		return (1);
	}
	return (0);
}
