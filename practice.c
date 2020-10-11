#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo(int a, int b)
{
	int sumTwo_output;
	sumTwo_output = a + b;
	return sumTwo_output;
}

int square(int n)
{
	return (n*n);
}

int get_max(int x, int y)
{
	if (x > y) return x;
	else return y;
}


int main(void) {
	
	int sum, square_output, max;
	
	sum = sumTwo(1,2);
	square_output = square(3);
	max = get_max(4,5);
	
	printf("%d, %d, %d",sum,square_output,max);
	return 0;
}
