#include <stdio.h>

int main(void) {
	int n,a;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		printf("%d",a);
		n=n/10;
	}
}
