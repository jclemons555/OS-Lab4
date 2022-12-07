#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exitProgram (int a,  int b);

int (*operation[4]) (int a, int b);

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int a;
	int b;
	int i; //chooses the operation 
	
	operation[0] = &add; 
  operation[1] = &subtract; 
  operation[2] = &multiply; 
  operation[3] = &divide; 
  operation[4] = &exitProgram; 

	while (i!=4) {
		printf( "Enter a number: ");
		scanf("%d",&a);
		printf( "Enter a number: ");
		scanf("%d",&b);
		printf( "Enter a number 0 - 4: ");
		scanf("%d",&i);

		printf("%d\n", operation[i](a,b));
  }
	
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) {printf("%d + %d = ",a,b); return a + b;}
int subtract (int a, int b) {printf("%d - %d = ",a,b); return b - a;}
int multiply (int a, int b) {printf("%d * %d = ",a,b); return a * b;}
int divide (int a, int b) {printf("%d / %d = ",a,b); return a / b;}
int exitProgram(int a,  int b) {printf("Exiting Program "); return 0;}
