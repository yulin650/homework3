#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 5

void convert(char *sPtr);
int bubble(int *);

int main(void)
{
	int a[SIZE]={5,11,7,21,9};
	int i;
	char string[]="Bubble Sort : ";
	
	bubble(a);
	
	printf("The string before conversion is:\n %s",string);
	for(i=0;i<SIZE;i++)
		printf("%d  ",a[i]);
	convert(string);
	printf("\n\nThe string after conversion is:\n %s",string);
	for(i=0;i<SIZE;i++)
		printf("%d  ",a[i]);
}

void convert(char *sPtr)
{
	while (*sPtr !='\0')
	{
		*sPtr = toupper( *sPtr);
		++sPtr;
	}
} 
