#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter the number");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++){
		if(i%2==0){
			printf("all even number is =%d\n",i);
		}
	}
	return 0;
}
