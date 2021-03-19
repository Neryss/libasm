#include "libasm.h"
#include <stdlib.h>

void	test_strcpy()
{
	char	s1[] = "salut";
	char	*dest;

	printf("\033[33mTesting strcpy\n\n\033[0m");
	dest = malloc(sizeof(char) * ft_strlen(s1) + 1);
	printf("Real : %s\n", strcpy(dest, s1));
	free(dest);
	dest = malloc(sizeof(char) * ft_strlen(s1) + 1);
	printf("ft   : %s\n", ft_strcpy(dest, s1));
	printf("\n");
	free(dest);
}

void	test_strlen()
{
	char	s1[] = "salut je suis un test";
	char	s2[] = "encore un autre";
	char	s3[] = "";
	char	s4[] = "h";

	printf("\033[33mTesting strlen\n\n\033[0m");
	printf("string is : %s\n", s1);
	printf("Real : %zu\n", strlen(s1));
	printf("ft   : %zu\n\n", ft_strlen(s1));
	printf("string is : %s\n", s2);
	printf("Real : %zu\n", strlen(s2));
	printf("ft   : %zu\n\n", ft_strlen(s2));
	printf("string is : %s\n", s3);
	printf("Real : %zu\n", strlen(s3));
	printf("ft   : %zu\n\n", ft_strlen(s3));
	printf("string is : %s\n", s4);
	printf("Real : %zu\n", strlen(s4));
	printf("ft   : %zu\n\n", ft_strlen(s4));
}

void	test_strcmp()
{
	char	s1[] = "salut";
	char	s2[] = "salut";
	char	a1[] = "salut";
	char	a2[] = "sadut";
	char	b1[] = "hello";
	char	b2[] = "hell";
	char	c1[] = "hell";
	char	c2[] = "hello";
	char	empty[] = "";
	printf("\033[33mTesting strcmp\n\n\033[0m");
	printf("s1 is : %s\ns2 is : %s\n", s1, s2);
	printf("Real : %d\n", strcmp(s1, s2));
	printf("ft   : %d\n\n", ft_strcmp(s1, s2));
	printf("s1 is : %s\ns2 is : %s\n", a1, a2);
	printf("Real : %d\n", strcmp(a1, a2));
	printf("ft   : %d\n\n", ft_strcmp(a1, a2));
	printf("s1 is : %s\ns2 is : %s\n", b1, b2);
	printf("Real : %d\n", strcmp(b1, b2));
	printf("ft   : %d\n\n", ft_strcmp(b1, b2));
	printf("s1 is : %s\ns2 is : %s\n", c1, c2);
	printf("Real : %d\n", strcmp(c1, c2));
	printf("ft   : %d\n\n", ft_strcmp(c1, c2));
	printf("s1 is : %s\ns2 is : %s\n", c1, empty);
	printf("Real : %d\n", strcmp(c1, empty));
	printf("ft   : %d\n\n", ft_strcmp(c1, empty));
}

int main()
{
	test_strcpy();
	test_strlen();
	test_strcmp();
	return (0);
}