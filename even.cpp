#include<stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	if(i>=1 && i<=10000){
	
	if(i%2==0)
	{
		printf("EVEN");
	}
	else{
		printf("ODD");
	}
}
else{
	printf("Enter value between 0 and 10000");
}
	return 0;
}
