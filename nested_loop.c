#include<stdio.h>

void main()
{
	int i,j,n;
	
	printf("Enter length of ladder:");		//prompt user
	scanf("%d",&n);					//store reply

	for(i=1;i<=n;i++)				//counting loop
	{
		for(j=1;j<=i;j++)			//printing loop
		{
		printf("%d ",j);			//print
		}
	printf("\n");					//newline
	}

}
