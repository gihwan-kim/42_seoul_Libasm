/**
 * This page is testing page to test libasm.a
 *  
**/

#include "libasm.h"

// ✅ 
// ❌ 
// 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 
// 7️⃣ 8️⃣ 9️⃣ 🔟🔢

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

void test_ft_write_util(int fd, char *str)
{
	if (fd == 1)
		write(1, str, strlen(str));
}

void test_ft_write(int fd, const void *buf, unsigned int count, char *number)
{
	ssize_t _write;
	ssize_t _ft_write;
	int		_write_errno;
	int		_ft_write_errno;
	const void *tmp_buf;

	if (buf)
		tmp_buf = buf;
	else
		tmp_buf = "NULL";

	printf("\n\t%s--- test %s  ---\n%s", C_NRML , number, C_NRML);
	printf("\t%s[test string] : %s|%s|\n%s ", C_PRPL , C_YLLW , tmp_buf, C_NRML);
	printf("\t%s[count value] : %s|%u|\n%s ", C_PRPL , C_YLLW , count, C_NRML);
	printf("\t%s[fd    value] : %s|%d|\n%s ", C_PRPL , C_YLLW , fd, C_NRML);

	test_ft_write_util(fd, "\twrite         : |");
	_write = write(fd, buf, count);
	_write_errno = errno;

	// 다른지 같은지 확인하기위해 기준값넣어줬음
	// errno = 10000;

	test_ft_write_util(fd, "|\n\tft_write      : |");
	_ft_write = ft_write(fd, buf, count);
	_ft_write_errno = errno;

	test_ft_write_util(fd, "|\n");
	
	printf("\t%swrite      ret: %s|%zd|", C_AQUA , C_YLLW , _write);
	printf("%s\n\tft_write   ret: %s|%zd|", C_AQUA, C_YLLW , _ft_write);
	printf("\n\t%swrite    errno: |%d|", C_NRML , _write_errno);
	printf("\n\tft_write errno: |%d|\n", _ft_write_errno);
	printf("%s\n\tresult:\t\t%s[", C_GREN, C_YLLW);

	if (_write == _ft_write)
		printf ("✅ ]\n\n");
	else
		printf("❌ ]\n\n");
	
}

void test_ft_write_file(const void *buf, unsigned int count, char *number)
{
	int fd;

	// write
	fd = open("./test_srcs/test_write.c", O_WRONLY | O_TRUNC | O_CREAT, 0777);
	write(fd, buf, strlen(buf));
	close(fd);

	// ft_write
	fd = open("./test_srcs/test_ft_write.c", O_WRONLY | O_TRUNC | O_CREAT, 0777);
	ft_write(fd, buf, strlen(buf));
	close(fd);
	printf("\n\t%s--- test %s  ---\n%s", C_NRML , number, C_NRML);
	printf("\t%s[test string] : %s|%s|\n%s ", C_PRPL , C_YLLW , buf, C_NRML);
	printf("%s\n\tresult:\t\t%scheck /test_srcs folder\n", C_GREN, C_YLLW);

}

void test_ft_read(int fd_read, int fd_ft_read, void *buf1, void *buf2,
					unsigned int count, char *number)
{
	ssize_t _read;
	ssize_t _ft_read;
	int		_read_errno;
	int		_ft_read_errno;

	_read = read(fd_read, buf1, count);
	_read_errno = errno;

	_ft_read = ft_read(fd_ft_read, buf2, count);
	_ft_read_errno = errno;

	if (!buf1)
		buf1 = "NULL";
	if (!buf2)
		buf2 = "NULL";

	printf("\n\t%s--- test %s  ---\n", C_NRML , number);
	printf("\t%sread       ret: %s|%zd|", C_AQUA , C_YLLW , _read);
	printf("%s\n\tft_read    ret: %s|%zd|", C_AQUA, C_YLLW , _ft_read);
	printf("\n\t%sread       buf: %s|%s|", C_AQUA , C_YLLW , buf1);
	printf("%s\n\tft_read    buf: %s|%s|", C_AQUA, C_YLLW , buf2);
	printf("\n\t%sread     errno: |%d|", C_NRML , _read_errno);
	printf("\n\tft_read  errno: |%d|\n", _ft_read_errno);
	printf("%s\n\tresult:\t\t%s[", C_GREN, C_YLLW);

	if ((_read_errno == _ft_read_errno) && !strcmp(buf1, buf2))
		printf ("✅ ]\n\n");
	else
		printf("❌ ]\n\n");
}

int main()
{
	char	dst_strcpy[300];
	char	buf_read[100];
	char	buf_ft_read[100];
	int		fd_read;
	int		fd_ft_read;

    printf("\nLibasm Testing ...");

	printf("\n\n\n%s< %sft_strlen.s test %s> :\n\n\n", C_NRML, C_RED, C_NRML);
	test_ft_strlen("hello", no1);
	test_ft_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit.", no2);
	test_ft_strlen("", no3);
	test_ft_strlen("    ", no4);

	printf("\n\n\n%s< %sft_strcpy.s test %s> :\n\n\n", C_NRML, C_RED, C_NRML);
	test_ft_strcpy(dst_strcpy, "hello", no1); 
	test_ft_strcpy(dst_strcpy, "Lorem ipsum dolor sit amet, consectetur adipiscing elit.", no2);
	test_ft_strcpy(dst_strcpy, "", no3);
	test_ft_strcpy(dst_strcpy, "    ", no4);

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
	test_ft_write(1, "same case", strlen("same case"), no1); 
	test_ft_write(1, "Lorem ipsum dolor sit amet, consectetur adipiscing elit.", 10 ,no2);
	test_ft_write(1, "", 0, no3);
	test_ft_write(1, "", 4, no4);
	test_ft_write(1, " ", strlen(" ") ,no5);
	test_ft_write(1, "    ", strlen("    "), no6);
	test_ft_write(1, "hi my name is gihwan-kim", strlen("hi my name is gihwan"), no7);

	test_ft_write(1, NULL, 5, no8);
	test_ft_write(30, "same case", strlen("same case"), no9);
	test_ft_write(20, "same case", strlen("same case"), no10);
	test_ft_write(-1, "same case", strlen("same case"), "11");
	// open(fd, 파일 열떄 옵션 , 파일 권한)
	test_ft_write_file("Lorem ipsum dolor sit amet, consectetur adipiscing elit.", \
						strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit."), "12");


	printf("\n\n\n%s< %sft_write.s test %s> :\n\n\n", C_NRML, C_RED, C_NRML);

	fd_read = open("./test_srcs/test_read_1.c", O_RDONLY);
	fd_ft_read = open("./test_srcs/test_ft_read_1.c", O_RDONLY);
	test_ft_read(fd_read, fd_ft_read, buf_read, buf_ft_read, 20, no1);
	close(fd_read);
	close(fd_ft_read);
	memset(buf_read, 0, 100);
	memset(buf_ft_read, 0, 100);

	fd_read = open("./test_srcs/test_read_2.c", O_RDONLY);
	fd_ft_read = open("./test_srcs/test_ft_read_2.c", O_RDONLY);
	test_ft_read(fd_read, fd_ft_read, buf_read, buf_ft_read, 30, no2);
	close(fd_read);
	close(fd_ft_read);
	memset(buf_read, 0, 100);
	memset(buf_ft_read, 0, 100);

	fd_read = open("./test_srcs/test_read_3.c", O_RDONLY);
	fd_ft_read = open("./test_srcs/test_ft_read_3.c", O_RDONLY);
	test_ft_read(fd_read, fd_ft_read, buf_read, buf_ft_read, 99, no3);
	close(fd_read);
	close(fd_ft_read);
	memset(buf_read, 0, 100);
	memset(buf_ft_read, 0, 100);

	fd_read = open("./test_srcs/test_read_4.c", O_RDONLY);
	fd_ft_read = open("./test_srcs/test_ft_read_4.c", O_RDONLY);
	test_ft_read(fd_read, fd_ft_read, buf_read, buf_ft_read, 0, no4);
	close(fd_read);
	close(fd_ft_read);
	memset(buf_read, 0, 100);
	memset(buf_ft_read, 0, 100);
	
	fd_read = open("./test_srcs/test_read_5.c", O_RDONLY);
	fd_ft_read = open("./test_srcs/test_ft_read_5.c", O_RDONLY);
	test_ft_read(fd_read, fd_ft_read, buf_read, buf_ft_read, 50, no5);
	close(fd_read);
	close(fd_ft_read);
	memset(buf_read, 0, 100);
	memset(buf_ft_read, 0, 100);

	fd_read = open("./test_srcs/test_read_6.c", O_RDONLY);
	fd_ft_read = open("./test_srcs/test_ft_read_6.c", O_RDONLY);
	test_ft_read(fd_read, fd_ft_read, NULL, NULL, 10, no6);
	close(fd_read);
	close(fd_ft_read);
	memset(buf_read, 0, 100);
	memset(buf_ft_read, 0, 100);

	fd_read = open("./test_srcs/test_read_7.c", O_RDONLY);
	fd_ft_read = open("./test_srcs/test_ft_read_7.c", O_RDONLY);
	test_ft_read(fd_read, fd_ft_read, buf_read, buf_ft_read, 70, no7);
	close(fd_read);
	close(fd_ft_read);
	memset(buf_read, 0, 100);
	memset(buf_ft_read, 0, 100);


	fd_read = open("./test_srcs/test_read_7.c", O_RDONLY);
	fd_ft_read = open("./test_srcs/test_ft_read_7.c", O_RDONLY);
	test_ft_read(fd_read, fd_ft_read, buf_read, buf_ft_read, -1, no8);
	close(fd_read);
	close(fd_ft_read);
	memset(buf_read, 0, 100);
	memset(buf_ft_read, 0, 100);


    return (0);
}