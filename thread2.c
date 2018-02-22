#include<stdio.h>

void thread2()
{
	int a=3;
	while(1)
	{
		if(a==0)
			break;
		printf("Thread2 : Count = %d \n", a);  
		a--;
	}
}
