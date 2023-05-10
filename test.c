/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// void printSize(int array[10]){
// void printSize(int array[]){
void printSize(int *array)
{
    printf("The size of the array is: %d bytes\n", sizeof(array));
    printf("The first value of the array is: %u\n", *array);
}

void printAllVariables(int *array, int numElements)
{
    // int endAdress = *array + numElements;
    for (int i = 0; i < numElements; i++)
    {
        printf("Index: %d | Value: %d\n", i, array[i]);
    }
}

void printAllVariablesWithEndAdress(int *array, int numElements)
{
    int *endAdress = array + numElements;
    while (array < endAdress)
    {
        // TODO: IMPROVE EXTRACTION OF THE INDEX
        int index = numElements - (endAdress - array);
        printf("Index: %d | Value: %d | Adress: %p\n", index, *array, array);
        array++;
    }
    printf("The End Address of the array is | Start adress of the next variable: %p\n", endAdress);
}

void printAllVariablesForLoop(int *array, int numElements)
{
    int *endAdress = array + numElements;
    for (int *i = array; i < endAdress; i++)
    {
        printf("Value: %d | Address %p\n", *i, i);
    }
    printf("The End Address of the Array is: %p", endAdress);
}

int main()
{

    int array[2] = {1, 2, 3};

    int *ptrArray = &array;

    int *ptrArrayEnd = ptrArray + 2;

    int *ptrFirstElement = &(array[0]);

    int *ptrSecondElement = &(array[1]);

    printf("Start Adress Array: %u\n", ptrArray);

    printf("Start Adress Last Element Array: %u\n", ptrArrayEnd);

    printf("Start Adress First Element: %u\n", ptrFirstElement);

    printf("Start Adress Second Element: %u\n\n", ptrSecondElement);

    int TestArray[10] = {2, 1, 5, 6, 12, 44, 9, 81, 92, 10};

    // We have the full length size of the array (TestArray)
    printf("Size of TestArray: %i bytes (4 bytes * 10)\n", sizeof(TestArray));

    // when the array is being passed as a parameter, is a pointer itself, so it loses its length size (40 bytes)
    // the size of all pointers is 8 bytes
    printSize(TestArray);

    // printAllVariables(TestArray, 10);

    // int* startTest = &TestArray;
    // int* endTest = startTest + 10;
    // printf("The End Adress is ---: %p\n", endTest);
    // Test with End Adress
    printAllVariablesWithEndAdress(TestArray, 10);

    printAllVariablesForLoop(TestArray, 10);

    return 0;
}
