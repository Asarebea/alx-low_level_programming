#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int pass[100];
	int l, sum, u;

	sum = 0;

	srand(time(NULL));

	for (l = 0; l < 100; l++)
	{
		pass[l] = rand() % 78;
		sum += (pass[l] + '0');
		putchar(pass[l] + '0');
		if ((2772 - sum) -'0' < 78)
		{
			u = 2772 - sum - '0';
			sum += u;
			putchar(u + '0');
			break;
		}
	}
	return (0);
}
