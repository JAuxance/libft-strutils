#include "ft_strutils.h"

int main(void)
{
	char *test;

	test = ft_strdup("test");
	printf("%s\n", test);
	free(test);
	test = ft_strdup("");
	printf("%s\n", test);
	free(test);
}
