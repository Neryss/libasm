#include "libasm.h"
#include <string.h>

int main()
{
	char	s1[] = "salut";
	char	s2[] = "salut";
	// printf("ret : %zu\n", ft_strlen("salut!"));
	printf("diff : %d\n", strcmp(s1, s2));
	printf("diff : %d\n", ft_strcmp(s1,s2));
	return (0);
}