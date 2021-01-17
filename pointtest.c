#include<stdio.h> 
#include<stdlib.h>

int main()
{
    char *i,*y;
	char a[]="what"; 
	int z=0;

	i=(char *)malloc(1000);	
	y=i;
	
	while(a[z]!='\0')	
	{
		*y=a[z];
		y++;
		z++;
	}
	
	printf("%s\n",i);   

	free(i);	

	return 0;
}
