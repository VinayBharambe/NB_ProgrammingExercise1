 #include<stdio.h>

void main()
{

	float p,q;
	printf("Enter First Number:");			//promt user
	scanf("%f",&p);					//store response in variable
	printf("Enter Second Number:");
	scanf("%f",&q);

	//comparision of numbers

	if(p==q)
	{
	printf("Both numbers are same\n");		//print
	}
	else if(p>q)
	{
	printf("%f is greater than %f \n",p,q);
	}
	else
	{
	printf("%f is greater than %f \n",q,p);
	}
}

