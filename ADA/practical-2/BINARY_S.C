#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int *bubbleSort(int *arr, int n)
{
    int i, t, j;
    for (i = 0; i <= n - 1; i++)
    {
	for (j = i + 1; j <= n - 1; j++)
	{
	    if (arr[i] > arr[j])
	    {
		t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
		delay(10);
	    }
	}
    }
    return arr;
}
void binarySearch(int e, int *arr, int n)
{
    int mid = 0, l = 0, u = n - 1, f = 0;

    for (mid = (l + u) / 2; l <= u; mid = (l + u) / 2)
    {
	delay(100);
	if (arr[mid] == e)
	{
	    f = 1;
	    break;
	}
	else if (arr[mid] < e)
	{
	    l = mid + 1;
	}
	else
	{
	    u = mid - 1;
	}
    }
    if (f == 0)
    {
	printf("-----Element not Found-----");
    }
    else
    {
	printf("-----Element Found At Index %d-----",mid);
    }
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
    printf("Time efficiency is %lf\n", tc);
}
int main()
{
    int t, i, j, n, e;
    int arr[1000], *a;
    time_t start, end;
    printf("\nEner value of n: ");
    scanf("%d", &n);
    printf("Unsorted Array\n");
    for (i = 0; i < n; i++)
    {
	arr[i] = rand() % 100;
	printf("%d ", arr[i]);
    }
    start = clock();
    a = bubbleSort(arr, n);
    delay(100);
    end = clock();
    printf("\nFor Sorting\n");
    display(a, n, start, end);
    printf("\nEnter value of element to be searched: ");
    scanf("%d", &e);
    start = clock();
    binarySearch(e, a, n);
    delay(100);
    end = clock();
    printf("\nFor Searching\n");
    display(a, n, start, end);
    return 0;
}
