#include <stdio.h>
#include <time.h>
#include <stdlib.h>
long int fact(int n)
{
    delay(10);
    if (n == 0)
    {
        return (1);
    }
    return (n * fact(n - 1));
}
void display(time_t start, time_t end)
{
    double tc;
    printf("\nstart=%d\n", start);
    printf("end=%d\n", end);
    printf("clock per sec=%d\n", CLOCKS_PER_SEC);
    tc = (double)difftime(end, start) / CLOCKS_PER_SEC;
    printf("Time efficiency is %lf", tc);
}
int main()
{
    int num;
    long int ans;
    time_t start, end;
    clrscr();
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num < 0)
    {
	printf("No factorial for negative number\n");
    }
    else
    {
	start = clock();
	ans = fact(num);
	delay(100);
	end = clock();
	printf("\nFactorial of %d is %ld\n\n", num, ans);
	display(start, end);
    }
    return 0;
}

