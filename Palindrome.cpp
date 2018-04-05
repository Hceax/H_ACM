// Palindrome.cpp
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0, c = 0, d = 0;
	long int t = 0, b = 0, e = 1;
	int flag = 0, fg = 0;
	scanf("%d", &t);
	if (t == 0)
		t = 1;
	while ((c = t % 10) == 0)
	{
		t /= 10;
	}
	//printf("%d\n", t);
	b = t;
	while (b != 0)
	{
		b /= 10;
		i++;
	}
	if (i % 2 == 1)
		fg = 1;
	for (int j = 0; j < i - 1; j++)
		e *= 10;
	for (int j = i - fg; j > i / 2; j--, e /= 100)
	{
		c = t % 10;
		d = t / e;
		if (c != d)
		{
			flag = 1;
			break;
		}
		t = (t - d*e - b) / 10;
	}
	if (flag == 1)
		printf("NO");
	else
		printf("YES");
	//system("PAUSE");
	return 0;
}

