#include<stdio.h>
#include<math.h>
void add(int x,int y)
{
	int res;
	res=x+y;
	printf("\n Sum of two numbers is %d \n",res);
}

void sub(int x,int y)
{
	int res;
	res=x-y;
	printf("\n Subtraction of %d-%d is %d \n",x,y,res);
}

void mul(int x,int y)
{
	int res;
	res=x*y;
	printf("\n Multiplication is %d \n",res);
}

void div(int x,int y)
{
	int res;
	res=x/y;
	printf("\n Division is %d \n",res);
}

void rem(int x,int y)
{
	int res;
	res=x%y;
	printf("\n Remainder is %d \n",res);
}

void main()
{
	int x,y;
	
	printf("\n Enter first number:");
	scanf("%d",&x);
	printf("\n Enter Second number:");
	scanf("%d",&y);

	add(x,y);
	sub(x,y);
	mul(x,y);
	div(x,y);
	rem(x,y);

}
