#include <stddef.h>

char	*strrchr(char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			last = &s[i];
		i++;
	}
	if (s[i] == (char)c)
		last = &s[i];
	return (last);
}