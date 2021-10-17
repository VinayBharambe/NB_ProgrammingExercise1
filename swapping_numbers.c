#include<stdio.h>

void main()
{

	int p,q,x;
	printf("Enter First Number:");					//prompt user
	scanf("%d",&p);							//store response
	printf("Enter Second Number:");
	scanf("%d",&q);

	x=p;		//swapping of numbers
	p=q;
	q=x;

	printf("First Number is %d \nSecond Number is %d \n",p,q);	//printing


}
