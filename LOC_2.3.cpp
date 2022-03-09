#include<stdio.h>
#include<math.h>
int main()
{
	int n,l,f,digit,sn;
	printf("enter the number : ");
	scanf("%d",&n);
	l=n%10;
	digit=(int)log10 (n);
	f=n/(int)pow(10,digit);
	
	sn=l;
	sn=l*(int)pow(10,digit);
	sn=sn+n%(int)pow(10,digit);
	sn=sn-l;
	sn=sn+f;
	printf("%d",sn);
	return 0;
}
