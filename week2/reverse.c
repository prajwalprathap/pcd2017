#include<stdio.h>
#include<math.h>

	int rev(int n)
{
	int a=0;
	while (n!=0)
	{
	int x=n%10;
	a=(a*10)+x;
	n/=10;
}
	return a;
}

int main()
{
	int a=0,x,n;
	printf("enter the number to be reverse\n");
	scanf("%d",&n);
	int d=rev(n);
	printf("the reverse of the number is %d\n",d);
	return 0;
}
