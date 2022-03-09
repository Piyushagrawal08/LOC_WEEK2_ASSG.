#include<stdio.h>
#include<math.h>
int main()
{
	int i,odd_sum=0,even_sum=0,sum;
	int n[10];
	for(i=1;i<=10;i++)
	{
		printf("number is ");
		scanf("%d",&n[i]);
	    if(n[i]%2==0)
	    {
	    	even_sum +=n[i];
		}
		else
		{
			odd_sum +=n[i];
			sum +=n[i];
		}
	}
	printf("odd sum is %d : ",odd_sum);
	printf("even sum is %d : ",even_sum);
	return 0;
}
