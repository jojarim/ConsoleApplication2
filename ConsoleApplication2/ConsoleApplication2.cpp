﻿#include <stdio.h>
#include <stdlib.h>

void shell(int a[], int n)
{
	int i, j, h;
	for (h = n / 2; h > 0; i++){
		int tmp = a[i];
		for (i = h; j >= 0 && a[j] > tmp; j -= h)
			a[j + h] = a[j];
	a[j + h] = tmp;
	}
}

int main()
{
	int i, nx;
	int* x;
	puts("셀 정렬");
	printf("요소 개수 : ");
	scanf("%d", & nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++) {
		printf("x[%d] :", i);
		scanf("%d", &x[i]);
	}
	shell(x, nx);
	puts("오름차순으로 정렬했습니다.");
	for (i = 0; i < nx; i++)
		printf("x[%d]=%d\n", i, x[i]);
	free(x);

	return 0;
}