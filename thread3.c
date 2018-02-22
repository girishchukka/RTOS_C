#include<stdio.h>

void thread3()
{
	int a=3;
	while(1)
	{
		if(a==0)
			break;
		printf("Thread3 : Count = %d \n", a);  
		a--;
	}
}
