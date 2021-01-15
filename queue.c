/**佇列加入和刪除**/ 
#include<stdio.h> 
#include<stdlib.h> 
#define MAX 10 

int front = 0;	
int rear = MAX-1; 
char item [MAX][20];
int i;
 
void add()
{
	if(front<=rear) //0~9
	{
		printf("輸入要新增之資料\n\n"); 
		gets(item[front]);
		front++;
	}
	else
		printf("沒有空間\n\n");	
}

void dele()
{
	if(front<=0)
		printf("沒有資料\n");
	else	
	{
		front--;
		printf("資料 '%s' 已被刪除\n",item[front]);
	}
}

void list()
{
	int n=1;
	printf("--------列表----------\n");
	for(i = 0; i <= front-1 ; i++) 
	{
		printf("第 %d 筆資料 %s\n",n,item[i]);
		n++;
	}
	printf("----------------------\n\n");
} 
 
int main()
{
	while(1)
	{
		printf("(1)新增資料 (2)刪除資料\n\n");
		int option=getch();
		switch(option)
			{
			case '1':
				add();
				list(); 
				break;
			case '2':
				dele();
				break;
			default:
				printf("error\n");
				break;
			}
	}
	return 0;
} 
