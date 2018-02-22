#include<stdio.h>
#include<sys/time.h>
#include"headers.h"

void main()
{
	int a=5;
	double wait=33333;
	struct timeval stop, start;
	gettimeofday(&start, NULL);

	printf("\n Value of a = %d \n", a);  
	thread1();
	printf("\n");
	thread2();
	printf("\n");
	thread3();

	//while(wait--);

	gettimeofday(&stop, NULL);

	printf("took %lu\n", stop.tv_usec - start.tv_usec);
	printf("\n End\n");
}
