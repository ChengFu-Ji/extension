#include<stdio.h> 
#include<stdlib.h>

int main()
{
    char *i,*y;
	char a[5]="what"; 
	int z=0;

	i=(char *)malloc(1000);	
	y=i;
	
	for( z ; z<5 ; z++)
	{
		*y=a[z];
		y++;
	}
	
	printf("%s\n",i);   
	return 0;
}
