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

	for (int cap = 0; s[cap] != '\0'; cap++)
	{
		if (s[cap] >= 97 && s[cap] <= 122)
		{
			if (cap == 0)
			{
				s[cap] -= 32;
			}
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
