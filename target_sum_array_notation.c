#include <stdio.h>

void solve(int *arr, int numElements, int target, int *solution)
{
    for (int i = 0; i < numElements; i++)
    {
        for (int j = 0; j < numElements; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (arr[i] + arr[j] == target)
            {
                solution[0] = i;
                solution[1] = j;
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

    printf("Solution: (%d, %d)\n", solution[0], solution[1]);

    return 0;
}