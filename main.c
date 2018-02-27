#include<stdio.h>
#include<sys/time.h>
#include"headers.h"

typedef struct Task_
{
	int Interval;
	int lastTime;
	void (*func)(void);
} Task_t;

Task_t task_list[] =
{
	{0, 0, thread1},
	{0, 0, thread2},
	{0, 0, thread3}
};

void main()
{
	Task_t *task_ptr = task_list;
	int i = 0;
	int count = 0;

	do {
		for(i=0; i<3; i++) {
			task_ptr[i].func();
		}

		printf("\n One iteration completed \n");
		if(count == 3) {
			break;
		} else {
			count++;
		}
	} while(1);
}
