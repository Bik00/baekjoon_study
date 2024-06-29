#include <stdio.h>

int main(void)
{
	int N;
	int index = 0;
	int num = 0;
	int count = 0;
	int answer = 0;

	scanf("%d", &N);
	while (count < N)
	{
		num = index;

		while (num > 0 && num / 10 != 0)
		{
			if (num % 10 == 6 && (num / 10) % 10 == 6 && (num / 100) % 10 == 6)
			{
				answer = index;
				count ++;
				break;
			}
			num = num / 10;
		}
		index ++;
	}
	printf("%d\n", answer);

	return (0);
}
