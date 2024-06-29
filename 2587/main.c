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
	int index_2;
	int *array;

	index = 0;
	array = (int *)calloc(5, sizeof(index));
	while (index < 5)
	{
		scanf("%d", &array[index]);
		index ++;
	}

	index = 0;
	while(index < 5)
	{
		index_2 = index + 1;
		while (index_2 < 5)
		{
			if (array[index] > array[index_2])
			{
				ft_swap(&array, index, index_2);
			}
			index_2 ++;
		}
		index ++;
	}

	printf("%d\n", (array[0] + array[1] + array[2] + array[3] + array[4]) / 5);
	printf("%d\n", array[2]);
	return 0;
}