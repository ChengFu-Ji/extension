/**��C�[�J�M�R��**/ 
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
		printf("��J�n�s�W�����\n\n"); 
		gets(item[front]);
		front++;
	}
	else
		printf("�S���Ŷ�\n\n");	
}

void dele()
{
	if(front<=0)
		printf("�S�����\n");
	else	
	{
		front--;
		printf("��� '%s' �w�Q�R��\n",item[front]);
	}
}

void list()
{
	int n=1;
	printf("--------�C��----------\n");
	for(i = 0; i <= front-1 ; i++) 
	{
		printf("�� %d ����� %s\n",n,item[i]);
		n++;
	}
	printf("----------------------\n\n");
} 
 
int main()
{
	while(1)
	{
		printf("(1)�s�W��� (2)�R�����\n\n");
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
