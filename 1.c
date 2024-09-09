#include<stdio.h>
#include<stdlib.h>
struct day
{
	char* dayname;
	int date;
	char* activity;
};
struct day* createday()
{
	struct day* newday=(struct day*)malloc(sizeof(struct day));
	newday->dayname=(char*)malloc(sizeof(char));
	newday->activity=(char*)malloc(sizeof(char));
	printf("Enter dayname:");
	scanf("%s",newday->dayname);
	printf("Enter date:");
	scanf("%d",&newday->date);
	printf("Enter activity:");
	scanf(" %[^\n]",newday->activity);
	return newday;
}
	
void read(struct day* calender[],int size)
{	
	for(int i=0;i<size;i++)
	{
		printf("Enter the details for day %d\n",i+1);
		calender[i]=createday();
	}
}
void display(struct day* calender[],int size)
{
	printf("\nWeek'c activity detail:\n");
	for(int i=0;i<size;i++)
	{
	   printf("Day:%d\n",i+1);
	   printf("Dayname:%s\n",calender[i]->dayname);
	   printf("Date:%d\n",calender[i]->date);
	   printf("Activity:%s\n",calender[i]->activity);
	   printf("\n");
	}
}	
void freememory(struct day* calender[],int size)
{
	for(int i=0;i<size;i++)
	{
	free(calender[i]->dayname);
	free(calender[i]->activity);
	free(calender[i]);
	}
}
int main()
{
	struct day* week[7];
	read(week,7);
	display(week,7);
	freememory(week,7);
	return 0;
}
	freememory(week,7);
	return 0;
}
