#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void linearSearch(int e, int *arr, int n)
{
	int i,f=0;
	for(i=0;i<n;i++)
	{
		if(e==arr[i])
		{
			f=1;
			break;
		}
		delay(10);
	}
    if (f == 0)
    {
	printf("-----Element not Found-----");
    }
    else
    {
	printf("-----Element Found-----");
    }
}
void display(time_t start, time_t end)
{
    double tc;
    printf("\nstart=%d\n", start);
    printf("end=%d\n", end);
    printf("clock per sec=%d\n", CLOCKS_PER_SEC);
    tc = (double)difftime(end, start) / CLOCKS_PER_SEC;
    printf("Time efficiency is %lf\n", tc);
}
int main()
{
    int t, i, j, n,e;
    int arr[1000],*a;
    time_t start, end;
    clrscr();
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
	arr[i] = rand() % 100;
	printf("%d ", arr[i]);
    }
    printf("\nEnter value of element to be searched: ");
    scanf("%d", &e);
    start = clock();
    linearSearch(e,arr,n);
    delay(100);
    end = clock();
    printf("\nFor Searching\n");
    display(start, end);
    return 0;
}