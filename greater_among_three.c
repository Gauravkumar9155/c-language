#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("enter the value of a b c number ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b){
		if(a>c){
		    printf("a is greater");
		}
	}
	else{
		if(b>a){
			if(b>c){
				printf("b is greater");
				
			}
			
		}
	}
	if(c>a){
		if(c>b){
			printf("c is greater");
		}
	}
	return 0;
}
