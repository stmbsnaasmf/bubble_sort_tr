#include <stdio.h>
#include <stdbool.h>

void bubbleSortAsc(int* arr, int arrSize);

void bs_asc_tr(int *arr, int arrSize, int currentIndex, bool isSorted);

void permute_tr(char* str, int strLength);

int main(int argc, char **argv)
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrSize; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

//    bubbleSortAsc(arr, arrSize);
	bs_asc_tr(arr, arrSize, 0, true);

    for (int i = 0; i < arrSize; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");


    return 0;
}

void bs_asc_tr(int *arr, int arrSize, int currentIndex, bool isSorted)
{
	if (currentIndex == arrSize - 1)
	{
		if (!isSorted)
		{
			bs_asc_tr(arr, arrSize, 0, true);
		}
	}
	else if (arr[currentIndex] > arr[currentIndex + 1])
	{
		int temp = arr[currentIndex + 1];
		arr[currentIndex + 1] = arr[currentIndex];
		arr[currentIndex] = temp;

		bs_asc_tr(arr, arrSize, currentIndex + 1, false);
	}
	else
	{
		bs_asc_tr(arr, arrSize, currentIndex + 1, isSorted);
	}
}

void bubbleSortAsc(int* arr, int arrSize)
{
    for (int i = 0; i < arrSize - 1; i++)
    {
        for (int j = 0; j < arrSize - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

