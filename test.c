#include<stdio.h>
#include<stdlib.h>
int main(){
	int i = 0;
	char c[25] = "folk";
	char *p;
	p=c;
	while(1){
		if(p == '\0')break;
		p++;
	}
	printf("%d",*p);
}
