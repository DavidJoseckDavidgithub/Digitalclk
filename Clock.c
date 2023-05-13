#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int h, m, s;
	h=m=s= 0;
	int d = 1000; // for slow down 1000 milliseconds used to be input into sleep function

	printf("Set time : \n");
	scanf("%d : %d : %d", &h,&m,&s);
	if(h > 12 || m > 60 || s > 60)
	{
		printf("ERROR ! \n");
		exit (0);
	}
	while(1)
	{
		s++;
		if(s > 59)
		{
			m++;
			s = 0;
		}
                if(m > 59)
 		{
			h++;
 			m = 0;
		}
		if(h > 12)
		{
			h = 1;
		}
	printf("\n clock : ");
	printf("\n %02d : %02d : %02d", h,m,s);
	sleep(d); // the function sleep slows down the loop and makes it like a real clock
	system("cls"); // clears the screan
	}
	return (0);
}
