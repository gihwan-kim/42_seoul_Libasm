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

	printf("--- test %s  ---\n", number);
	printf("[test string] : %s\n ", str);
	printf("strlen : %u, ft_strlen: %u [", _strlen, _ft_strlen);
	if (_strlen == _ft_strlen)
		printf ("✅]\n\n");
	else
		printf("❌]\n\n");
}

void test_ft_strcpy(char *dst, char *src, char *number)
{
	char *_strcpy;
	char *_ft_strcpy;

	_strcpy = strcpy(dst, src);
	_ft_strcpy = ft_strcpy(dst, src);
	printf("--- test %s  ---\n", number);
	printf("[dst] : %s\n", dst);
	printf("[src] : %s\n\n", src);
	printf("strcpy   : |%s|\nft_strcpy: |%s|\nresult: [", _strcpy, _ft_strcpy);
	// 두문자열이 같다면 strcmp 는 0을 리턴
	if (!strcmp(_strcpy, _ft_strcpy))
		printf ("✅]\n\n");
	else
		printf("❌]\n\n");
}

int main()
{
	char dst[300];

    printf("\nLibasm Testing ...");

	printf("\n\n\n---- < ft_strlen test > ----\n\n\n");
	test_ft_strlen("hello", no1);
	test_ft_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit, \
					sed do eiusmod tempor incididunt ut labore \
					et dolore magna aliqua.", no2);
	test_ft_strlen("", no3);
	test_ft_strlen("    ", no4);

	printf("\n\n\n---- < ft_strcpy test > ----\n\n\n");
	test_ft_strcpy(dst, "hello", no1); 
	test_ft_strcpy(dst, "Lorem ipsum dolor sit amet, consectetur adipiscing elit, \
					sed do eiusmod tempor incididunt ut labore \
					et dolore magna aliqua.", no2);
	test_ft_strcpy(dst, "", no3);
	test_ft_strcpy(dst, "    ", no4);

    return (0);
}