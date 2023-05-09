#include <stdio.h>

void solve(int *arr, int numElements, int target, int *solution)
{
	int *start = arr;
	int *end = arr + numElements - 1;

	while (start <= end)
	{
		int currentSum = *start + *end;
		if (currentSum < target)
		{
			start = start + 1;
		}
		else if (currentSum > target)
		{
			end = end - 1;
		}
		else
		{
			solution[0] = start - arr;
			solution[1] = end - arr;
			break;
		}
	}
}

#define NUM_ELEMENTS 6

int main()
{
	int arr[NUM_ELEMENTS] = {1, 4, 6, 10, 12, 13};
	int target = 17;

	int solution[2];
	solve(arr, NUM_ELEMENTS, target, solution);

	// printf("Solution: (%d, %d)\n", solution[0], solution[1]);
	printf("Indexes: (%d, %d)\n", solution[0], solution[1]);
	printf("Values: (%d, %d)\n", arr[solution[0]], arr[solution[1]]);

	return 0;
}