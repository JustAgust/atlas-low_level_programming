int _strlen(const char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}

	return (len);
}
