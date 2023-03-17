#include<stdio.h>
int main()
{
	long int n,rev_n=0,org_n;
	printf("Enter the original number:");
	scanf("%ld",&org_n);
	do
	{
		org_n=n;
		rev_n=rev_n*10+n%10;
		n=n/10;
	}
	while(n!=0);
	printf("The reverse number is %ld\n",rev_n);
	if(rev_n==org_n)
		printf("It is a palindrome number\n ");
	else
		printf("It is not a palindrome number");
	return 0;
}