#include <stdio.h>
#include <stdlib.h>

void ft_swap(int **array, int index, int index_2) {

	int temp;

	temp = (*array)[index];
	(*array)[index] = (*array)[index_2];
	(*array)[index_2] = temp;
}

int main(void) {
	int N;
	int index;
	int *array;
	int index_2;

	scanf("%d", &N);
	array = (int *)calloc(N, sizeof(int));
	index = 0;
	while(index < N)
	{
		scanf("%d", &array[index]);
		index ++;
	}

	index = 0;
	while(index < N)
	{
		index_2 = index + 1;
		while (index_2 < N)
		{
			if (array[index] > array[index_2])
			{
				ft_swap(&array, index, index_2);
			}
			index_2 ++;
		}
		index ++;
	}

	index = 0;
	while (index < N)
	{
		printf("%d\n", array[index]);
		index ++;
	}
	return 0;
}
