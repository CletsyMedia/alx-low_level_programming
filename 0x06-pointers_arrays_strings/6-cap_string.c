/**
 * cap_string - a function that capitalizes
 *  all words of a string
 *
 * @s: pointer to char input array
 *
 * Return: @s
 */
char *cap_string(char *s)
{
	int cap = 0;

	/*iterate through our array values*/
	while (s[cap] != '\0')
	{
		/*check for any lowercase letters*/
		if (s[cap] >= 97 && s[cap] <= 122)
		{
			/**
			 * if we have a null character
			 * change its value to capital
			 */
			if (cap == 0)
			{
				s[cap] -= 32;
			}
			/**
			 * if we find any character matching the below before any small
			 * letter we change that value to a capital letter.
			 */
			if (s[cap - 1] == 32 || s[cap - 1] == 9 || s[cap - 1] == 10 ||
					s[cap - 1] == 44 || s[cap - 1] == 59 || s[cap - 1] == 46 ||
					s[cap - 1] == 33 || s[cap - 1] == 63 || s[cap - 1] == 34 ||
					s[cap - 1] == 40 || s[cap - 1] == 41 || s[cap - 1] == 123 ||
					s[cap - 1] == 124)
			{
				s[cap] -= 32;
			}
		}
		cap++;
	}
	return (s);
}
