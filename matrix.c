#include<stdio.h>

void main()
{
	int m[3][3];					//declaration if 3x3 array
	int i,j;					//declaration of loop variables

	for(i=0;i<3;i++)				//row loop for accepting number
	{
		for(j=0;j<3;j++)			//column loop fpr accepting number
		{
		printf("Enter Number:");		//promt
		scanf("%d",&m[i][j]);			//store number
		}

	}


	for(i=0;i<3;i++)				//row loop for printing number
	{
		for(j=0;j<3;j++)			//column loop for printing number
		{
		printf("\t %d",m[i][j]);		//printing matrix

		}
		printf("\n");				//newline
	}






}
