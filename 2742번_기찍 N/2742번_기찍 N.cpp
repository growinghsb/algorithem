﻿#pragma warning (disable : 4996)
#include <iostream>

int main()
{
	int num;
	scanf("%d", &num);

	for (int i = num; i > 0; --i)
	{
		printf("%d\n", i);
	}

	return 0;
}