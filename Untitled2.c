#include<stdio.h>
int main()
{
	int marks,number;
	printf("Enter the marks");
	scanf("%d",&number);
	marks=number/10;
	switch (marks)
	{
	

    	case 10 :
	    case   9 :
	      printf("O grade marks");
	      break;
        case 8:
          printf("E grade marks");
          break;
        case 7:
          printf("A grade marks");
          break;
        case 6:
          printf("B grade marks");
          break;
        case 5:
          printf("c grade marks");
          break;
        case 4:
          printf("D grade marks");
          break;
        case 3:
       
         dafult:
         	printf("failed");
         	
         	break;
         	
         }
         return 0;
}
