#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "ft_additionals.h"

int main(void)
{
	char *ret;
	const char *haystack = "original national alegro alalbastal";

	ret = (char *)haystack;
	assert(strncmp(ret, "al", 2) == ('o' - 'a'));
	printf("%s\n", ret);
	ret = ft_strstr((const char *)ret, "al");
	assert(!strncmp(ret, "al", 2));
	printf("%s\n", ret);
	ret = ft_strstr((const char *)(ret+1), "al");
	assert(!strncmp(ret, "al", 2));
	printf("%s\n", ret);
	ret = ft_strstr((const char *)(ret+1), "al");
	assert(!strncmp(ret, "al", 2));
	printf("%s\n", ret);
	ret = ft_strstr((const char *)(ret+1), "al");
	assert(!strncmp(ret, "al", 2));
	printf("%s\n", ret);
	ret = ft_strstr((const char *)(ret+1), "al");
	assert(!strncmp(ret, "al", 2));
	printf("%s\n", ret);
	ret = ft_strstr((const char *)(ret+1), "al");
	assert(!strncmp(ret, "al", 2));
	printf("%s\n", ret);
	ret = ft_strstr((const char *)(ret+1), "al");
	assert(ret == NULL);
}
