#include "libasm.h"
#include <string.h>

int main()
{
	char	s1[] = "salut";
	char	s2[10];

	printf("%s\n", ft_strcpy(s2, s1));
	return (0);
}