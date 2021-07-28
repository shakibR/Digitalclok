#include<stdio.h>
#include<unistd.h>

main()
{
	int h=0,m=0,s=0;
	double i;
    system("clear");
	printf("Please enter a time format in HH:MM:SS");
	scanf("%d%d%d",&h,&m,&s);
	l:
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{

                system("clear");
				printf("\n\n\t\t\t%d:%d:%d",h,m,s);
				if(h<12)
				{
					printf(" AM");
				}
				else
				{
					printf(" PM");
				}
				printf("\n\n\t\t\tWednesday 28 JUlY 2021");
				for(i=0;i<3619999;i++)
				i++;
				i--;

                sleep(1);
			}
			s=0;
		}
		m=0;
	}
	h=0;
	goto l;



}

