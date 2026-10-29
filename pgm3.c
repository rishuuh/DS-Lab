//write a pgm to check whether even or odd
#include<stdio.h>
int main()
{
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is an even number \n",a);
	}else{
		printf("%d is an odd number \n",a);
	     }
	return 0;
}
