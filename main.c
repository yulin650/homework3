#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 5

void printChar(const char *sPtr);
int bubble(int *);

int main(void)
{
	int a[SIZE]={5,11,7,21,9};
	int i;
	char string[]="Bubble Sort : ";
	
	bubble(a);
	
	printf("The string is:\n");
	printChar(string);
	for(i=0;i<SIZE;i++)
		printf("%d  ",a[i]);
}

void printChar(const char *sPtr)//一次一個一個字印出字串 
{
	for(;*sPtr !='\0';sPtr++)
	{
		printf("%c",*sPtr);
	}
} 
