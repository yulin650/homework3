#include <stdio.h>
#define SIZE 5

int bubble(int a[])
{
	int pass,i,t;
	
	for(pass=1;pass<SIZE;pass++)
	{
		for(i=0;i<SIZE-1;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	return a[i];
}
