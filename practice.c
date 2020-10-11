#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int get_integer(void);
int factorial(int n);
int combination(int n, int r);

int main(void) 
{ 
  int a, b;
  a = get_integer(); 
  b = get_integer(); 
 
  printf("C(%d, %d) = %d \n", a, b, combination(a, b)); 
  return 0; 
} 

int combination(int n, int r) 
{ 
  return (factorial(n) / (factorial(r) * factorial(n - r))); 
} 

int get_integer(void) 
{ 
	int n; 
	printf("Á¤¼ö : "); 
	scanf("%d", &n); 
	return n; 
} 

int factorial(int n) 
{ 
	int i; 
	int res = 1; 
	
	for (i = 1; i <= n; i++) 
		res *= i; 
	return res; 
} 
