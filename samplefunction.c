#include"libft.h"
char	samplefunction(unsigned int i, char c)
{
	char	ptr;

	ptr = c;
	if (i < 5 && (c >= 'a' && c <= 'z'))
	{
		ptr = ptr - 32;
	}
	return (ptr);
}