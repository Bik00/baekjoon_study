#include <stdio.h>

int main(void) {

	int N = 0;
	int answer = 5001;
	int five_count = 0;
	int three_count = 0;
	int index = 0;
	int	calc;
	int output;
	int count;

	scanf("%d", &N);
	count = N;
	while (count >= 3) {
		output = 0;
		calc = count;
		five_count = 0;
		three_count = index;
		while (calc >= 5) {
			calc -= 5;
			five_count += 1;
		}

		while (calc >= 3) {
			calc -= 3;
			three_count += 1;
		}

		if (calc > 0) {
			output = -1;
		}
		else
		{
			output = five_count + three_count;
		}

		if (output > -1 && output < answer)
		{
			answer = output;
		}
		count = count - 3;
		index += 1;
	}

	if (answer == 5001)
		answer = -1;
	printf("%d\n", answer);
	return 0;
}
