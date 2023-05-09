#include <stdio.h>

void solve(int* arr, int numElements, int target, int* solution)
{
	int* endAddr = arr + numElements - 1; //the end address or the last element

	for(int* startAddress1 = arr; startAddress1 <= endAddr; startAddress1++)
	{
		for(int* startAddress2 = arr; startAddress2 <= endAddr; startAddress2++)
		{
			if(startAddress1 == startAddress2)
			{
				continue;
			}

			if(*startAddress1 + *startAddress2 == target)
			{
				printf("%p \n", arr);
				printf("%p \n", startAddress1);
				printf("%p \n", startAddress1 - arr);
				printf("%p \n", startAddress2 - arr);
				printf("%p \n", endAddr);
				solution[0] = startAddress1 - arr;
				solution[1] = startAddress2 - arr;
				return;
			}
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

	printf("Solution: (%p, %p)\n", solution[0], solution[1]);

    return 0;
}