/**
* _isalpha - checks if a char is an alphabet
* Checks if a character is a letter and
* returns 1 if is and 0 if not
* @c: The character to check
*
* Return: int 0 if not alphabet
* and 1 if alphabet
*/
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
	{
		return (1);
	}
	return (0);
}
