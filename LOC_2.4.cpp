#include<stdio.h>
int main()
{
	int i,n,t1=0,t2=1,nextterm=t1+t2;
	
	printf("enter number of terms : ");
	scanf("%d",&n);
	
	printf("fibonacci series is : %d %d %d \t",t1,t2,nextterm);
	
	for(i=3;i<=n;++i)
	{
	
	printf("%d, ",nextterm);
	t1=t2;
	t2=nextterm;
	nextterm=t1+t2;
}
	
}
