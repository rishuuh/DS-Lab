//write a pgm to swap two numbers
#include<stdio.h>
int main()
{ 
	int a,b,temp;
	printf("Enter two numbers: \n");
	scanf("%d %d",&a,&b);
	printf("Numbers before Swapping are: %d %d \n ",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("Numbers after swapping are : %d %d \n",a,b);
	return 0;
}
