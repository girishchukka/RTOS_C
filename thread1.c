#include<stdio.h>

void thread1()
{
	int a=3;
	while(1)
	{
		if(a==0)
			break;
		printf("Thread1 : Count = %d \n", a);  
		a--;
	}
}
