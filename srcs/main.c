/**
 * This page is testing page to test libasm.a
 *  
**/

#include "libasm.h"

// ✅ 
// ❌ 
// 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 
// 7️⃣ 8️⃣ 9️⃣ 🔟

void test_ft_strlen(char *str, char *number)
{
	unsigned int _strlen;
	unsigned int _ft_strlen;

	_strlen = strlen(str);
	_ft_strlen = ft_strlen(str);

	printf("\n\t%s--- test %s  ---\n", C_NRML , number);
	printf("\t%s[test string] : %s|%s|\n ", C_GREN , C_YLLW , str);
	printf("\t%sstrlen    : %s%u", C_AQUA , C_YLLW , _strlen);
	printf("%s\n\tft_strlen : %s%u\n\t", C_AQUA, C_YLLW , _ft_strlen);
	printf("%s\n\tresult:\t\t%s[", C_GREN, C_YLLW);

	if (_strlen == _ft_strlen)
		printf ("✅ ]\n\n");
	else
		printf("❌ ]\n\n");
}

void test_ft_strcpy(char *dst, char *src, char *number)
{
	char *_strcpy;
	char *_ft_strcpy;

	_strcpy = strcpy(dst, src);
	_ft_strcpy = ft_strcpy(dst, src);

	printf("\n\t%s--- test %s  ---\n", C_NRML , number);
	printf("\t%s[dst] : %s|%s|\n", C_PRPL, C_YLLW, dst);
	printf("\t%s[src] : %s|%s|\n\n", C_PRPL, C_YLLW, src);
	printf("\t%sstrcpy   : %s|%s|\n\t", C_AQUA,  C_YLLW, _strcpy);
	printf("%sft_strcpy: %s|%s|\n\t", C_AQUA , C_YLLW, _ft_strcpy);
	printf("%s\n\tresult:\t   %s[", C_GREN, C_YLLW);

	// strcmp : 두문자열이 같다면 strcmp 는 0을 리턴
	if (!strcmp(_strcpy, _ft_strcpy))
		printf ("✅ ]\n\n");
	else
		printf("❌ ]\n\n");
}

void test_ft_strcmp(char *s1, char *s2, char *number)
{
	int	_strcmp;
	int	_ft_strcmp;
	int	check;

	_strcmp = strcmp(s1, s2);
	_ft_strcmp = ft_strcmp(s1, s2);
	printf("\n\t%s--- test %s  ---\n", C_NRML , number);
	printf("\t%s[s1] : %s|%s|\n", C_PRPL , C_YLLW , s1);
	printf("\t%s[s2] : %s|%s|\n\n", C_PRPL , C_YLLW , s2);
	printf("\t%sstrcmp   : %s|%d|\n\t", C_AQUA , C_YLLW , strcmp(s1, s2));
	printf("%sft_strcmp: %s|%d|\n\t", C_AQUA , C_YLLW , _ft_strcmp);
	printf("%s\n\tresult:\t   %s[", C_GREN, C_YLLW);

	if (_strcmp > 0 && _ft_strcmp > 0)
		printf ("✅ ]\n\n");
	else if (!_strcmp&& !_ft_strcmp)
		printf ("✅ ]\n\n");
	else if (_strcmp < 0 && _ft_strcmp < 0)
		printf ("✅ ]\n\n");
	else
		printf("❌ ]\n\n");
}


void test_ft_strdup(char *str, char *number)
{
	char *_strdup;
	char *_ft_strdup;

	_strdup = strdup(str);
	_ft_strdup = ft_strdup(str);

	printf("\n\t%s--- test %s  ---\n", C_NRML , number);
	printf("\t%s[test string] : %s|%s|\n ", C_PRPL , C_YLLW , str);
	printf("\t%sstrdup    :     %s|%s|", C_AQUA , C_YLLW , _strdup);
	printf("%s\n\tft_strdup :     %s|%s|\n\t", C_AQUA, C_YLLW , _ft_strdup);
	printf("%s\n\tresult:\t\t%s[", C_GREN, C_YLLW);

	if (!strcmp(_strdup, _ft_strdup))
		printf ("✅ ]\n\n");
	else
		printf("❌ ]\n\n");
}

void test_ft_write(int fd, const void *buf, char *number)
{
	size_t _write;
	size_t _ft_write;

	_write = write(fd, buf, strlen(buf));
	_ft_write = ft_write(fd, buf, strlen(buf));

	printf("\n\t%s--- test %s  ---\n", C_NRML , number);
	printf("\t%s[test string] : %s|%s|\n ", C_PRPL , C_YLLW , buf);
	printf("\t%swrite    :     %s|%zu|", C_AQUA , C_YLLW , _write);
	printf("%s\n\tft_write :     %s|%zu|\n\t", C_AQUA, C_YLLW , _ft_write);
	printf("%s\n\tresult:\t\t%s[", C_GREN, C_YLLW);

	if (_write == _ft_write)
		printf ("✅ ]\n\n");
	else
		printf("❌ ]\n\n");
}
int main()
{
	char dst_cyp[300];

    printf("\nLibasm Testing ...");

	printf("\n\n\n%s< %sft_strlen.s test %s> :\n\n\n", C_NRML, C_RED, C_NRML);
	test_ft_strlen("hello", no1);
	test_ft_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit.", no2);
	test_ft_strlen("", no3);
	test_ft_strlen("    ", no4);

	printf("\n\n\n%s< %sft_strcpy.s test %s> :\n\n\n", C_NRML, C_RED, C_NRML);
	test_ft_strcpy(dst_cyp, "hello", no1); 
	test_ft_strcpy(dst_cyp, "Lorem ipsum dolor sit amet, consectetur adipiscing elit.", no2);
	test_ft_strcpy(dst_cyp, "", no3);
	test_ft_strcpy(dst_cyp, "    ", no4);

	printf("\n\n\n%s< %sft_strcmp.s test %s> :\n\n\n", C_NRML, C_RED, C_NRML);
	test_ft_strcmp("same case", "same case", no1); 
	test_ft_strcmp("not same", "Lorem ipsum dolor sit amet, consectetur adipiscing elit.", no2);
	test_ft_strcmp("", "", no3);
	test_ft_strcmp(" ", "", no4);
	test_ft_strcmp("", " ", no5);
	test_ft_strcmp("    ", "    ", no6);

	printf("\n\n\n%s< %sft_strdup.s test %s> :\n\n\n", C_NRML, C_RED, C_NRML);
	test_ft_strdup("same case", no1); 
	test_ft_strdup("Lorem ipsum dolor sit amet, consectetur adipiscing elit.", no2);
	test_ft_strdup("", no3);
	test_ft_strdup("", no4);
	test_ft_strdup(" ", no5);
	test_ft_strdup("    ", no6);
	test_ft_strdup("hi my name is gihwan-kim", no7);


	printf("\n\n\n%s< %sft_write.s test %s> :\n\n\n", C_NRML, C_RED, C_NRML);
	test_ft_write(1, "same case", no1); 
	test_ft_write(1, "Lorem ipsum dolor sit amet, consectetur adipiscing elit.", no2);
	test_ft_write(1, "", no3);
	test_ft_write(1, "", no4);
	test_ft_write(1, " ", no5);
	test_ft_write(1, "    ", no6);
	test_ft_write(1, "hi my name is gihwan-kim", no7);

    return (0);
}