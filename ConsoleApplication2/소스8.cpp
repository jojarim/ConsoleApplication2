#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int point1() 
{
	char* pt = "12345";
	printf("포인터 pt는 \"%s\"를 가리킵니다.\n", pt);

	return 0;
}



int point2()
{
	char st[10];
	st[0] = 'A';
	st[1] = 'B';
	st[2] = 'C';
	st[3] = 'D';
	st[4] = '\0';
	printf("문자열 st에는 \"%s\"가 들어 있습니다.\n", st);

	return 0;
}



void swap_ptr(char** x, char** y)
{
	char* tmp = *x;
	*x = *y;
	*y = tmp;
}

int point3()
{
	char* s1 = "ABCD";
	char* s2 = "EFGH";

	printf("포인터 s1는 \"%s\"를 가리킵니다.\n", s1);
	printf("포인터 s2는 \"%s\"를 가리킵니다.\n", s2);

	swap_ptr(&s1, &s2);

	puts("\n 포인터 s1과 s2의 값을 서로 교환했습니다.\n");

	printf("포인터 s1는 \"%s\"를 가리킵니다.\n", s1);
	printf("포인터 s2는 \"%s\"를 가리킵니다.\n", s2);

	return 0;
}

int str_len2(const char* s)
{
	int len = 0;
	while (s[len])
		len++;
	return len;
}

int point4() {
	char str[256];
	printf("문자열 : ");
	scanf_s("%s", str);
	printf("이 문자열의 길이는 %d입니다. \n", str_len2(str));

	return 0;
}

int str_chr3(const char* s, int c)
{
	int i = 0;
	c = (char)c;
	while (s[i] != c) {
		if (s[i] == '\0')
			return -1;
		i++;
	}
	return i;
}

int point5()
{
	char str[64];
	char tmp[64];
	int ch;
	int idx;

	printf("문자열: ");
	scanf_s("%s", str);

	printf("검색할 문자: "); 
	scanf_s("%s", tmp);
	ch = tmp[0];

	if ((idx = str_chr3(str, ch)) == -1)
		printf("문자 '%c'은(는)문자열에 없습니다. \n", ch);
	else
		printf("문자 '%c'은(는) %d번째에 있습니다. \n", ch, idx +1);

	return 0;
}



int main()
{	
	point1();
	printf("\n\n\n\n\n\n");
	point2();
	printf("\n\n\n\n\n\n");
	point3();
	printf("\n\n\n\n\n\n");
	point4();
	printf("\n\n\n\n\n\n");
	point5();
}
