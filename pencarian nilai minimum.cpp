#include<stdio.h>
int minimum(int a,int b,int c);
int main(void)
{
	int a,b,c,min;
	printf("operasi pencarian nilai minimum\n");
	printf("masukan bilangan 1 :");
	scanf("%d",&a);
	printf("masukan bilangan 2 :");
	scanf("%d",&b);
	printf("masukan bilangan 3 :");
	scanf("%d",&c);
	min=minimum(a,b,c);
	printf("bilangan terkecil adalah:%d",min);
	getchar();
}
	int minimum(int a,int b,int c)
	{
	int min;
	if(a>b){min=b;}
	else{min=a;}
	if(c<min){min=c;}
	return(min);
	
}
