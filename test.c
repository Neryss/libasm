#include "libasm.h"
#include <stdlib.h>

void	test_strcpy(void)
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

void	test_strlen(void)
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

void	test_strcmp(void)
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

void	test_read(void)
{
	int	f;
	int	d;
	int	bytes;
	char	buf[13];
	printf("\033[33mTesting read with test.c\n\n\033[0m");
	f = open("test.c", O_RDONLY);
	bytes = read(f, &buf, 13);
	buf[12] = 0;
	printf("Real read the %d following bytes : %s\n", bytes, buf);
	close(f);
	f = open("test.c", O_RDONLY);
	bytes = ft_read(f, buf, 13);
	buf[12] = 0;
	printf("ft   read the %d following bytes : %s\n\n", bytes, buf);
	close(f);
}

void	test_write(char *str)
{
	int	fd;
	fd = open("real_test.txt", O_RDWR | O_CREAT, 0775);
	printf("\033[33mTesting read with test.c\n\n\033[0m");
	ft_write(1, str, ft_strlen(str));
	write(1, str, ft_strlen(str));
	write(fd, str, ft_strlen(str));
	printf("Real output written inside of real_test.txt\n");
	close(fd);
	fd = open("ft_test.txt", O_RDWR | O_CREAT, 0775);
	write(fd, str, ft_strlen(str));
	printf("ft output written inside of ft_test.txt\n");
	close(fd);
}

void	test_strdup(void)
{
	printf("\033[33mTesting strdup\n\n\033[0m");
	char	*str = "salut";
	char	*s1 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	char	*s2 = "I'm a little sentence, you get it, it's working";

	printf("real with (%s) : %s\n", str, strdup(str));
	printf("ft   with (%s) : %s\n\n", str, strdup(str));
	printf("real with (%s) : %s\n", s1, strdup(s1));
	printf("ft   with (%s) : %s\n\n", s1, strdup(s1));
	printf("real with (%s) : %s\n", s2, strdup(s2));
	printf("ft   with (%s) : %s\n", s2, strdup(s2));
}

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	test_strcpy();
	test_strlen();
	test_strcmp();
	test_read();
	test_write("salut les gens en fait\n");
	test_strdup();
	return (0);
}