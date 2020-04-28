#include<stdio.h>
int cyc(int);
int main()
{
	int a,fact;
	printf("Enter any number");
	scanf("%d",&a);
	
	fact=cyc(a);
	printf("Factorial value=%d\n",fact);
	return 0;
}

int cyc(int x)
{
	int f;
	
	if(x==1)
	 return(1);
	else
	    f=x*cyc(x-1);
	    
	return (f);
}
