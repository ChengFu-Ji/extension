#include <stdio.h> 

int main()
{
    int a[3];
    int i;
    a[0]=1;
    a[1]=3;
    a[2]=5;

    for(i=0;i<3;i++){
        printf("%d\n",a[i]);
    }
    system("pause");
    return 0;                  
}