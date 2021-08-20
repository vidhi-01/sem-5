#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int *selectionSort(int *arr, int n)
{
    int i,j,index,t;
    for (i = 0; i < n - 1; i++)
    {
	index = i;
	for (j = i + 1; j < n; j++)
	{
	    if (arr[index] > arr[j])
	    {
		index = j;
		delay(10);
	    }
	}
	t = arr[i];
	arr[i] = arr[index];
	arr[index] = t;
    }
    return arr;
}
void display(int *arr, int n, time_t start, time_t end)
{
    int i;
    double tc;
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
	printf("%d ", arr[i]);
    }
    printf("\nstart=%d\n", start);
    printf("end=%d\n", end);
    printf("clock per sec=%d\n", CLOCKS_PER_SEC);
    tc = (double)difftime(end, start) / CLOCKS_PER_SEC;
    printf("Time efficiency is %lf", tc);
}
int main()
{
    int t, i, j, n, c = 0;
    int arrBest[1000], arrWorst[1000], arrAverage[1000], *ab, *aw, *aa;
    time_t start, end;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Unsorted Array For Best Case\n");
    for (i = 0; i < n; i++)
    {
	arrBest[i] = i;
	printf("%d ",arrBest[i]);
    }
    printf("\nUnsorted Array For Worst Case\n");
    for (i = n - 1; i >= 0; i--)
    {
	arrWorst[i] = c;
	printf("%d ",arrWorst[c]);
	c++;
    }
    printf("\nUnsorted Array For Average Case\n");
    for (i = 0; i < n; i++)
    {
	arrAverage[i] = rand() % 100;
	printf("%d ",arrAverage[i]);
    }
    printf("\n----------Best Case----------\n");
    start = clock();
    ab = selectionSort(arrBest, n);
    delay(100);
    end = clock();
    display(ab, n, start, end);
    printf("\n----------Worst Case----------\n");
    start = clock();
    aw = selectionSort(arrWorst, n);
    delay(100);
    end = clock();
    display(aw, n, start, end);
    printf("\n----------Average Case----------\n");
    start = clock();
    aa = selectionSort(arrAverage, n);
    delay(100);
    end = clock();
    display(aa, n, start, end);
    return 0;
}
