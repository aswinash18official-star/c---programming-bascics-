#include<stdio.h>
#include<conio.h>
      void main()
      {
      	int num1,num2;
      	char op;
      	printf("enter num1:");
      	scanf("%d",&num1);
      	
      	printf("enter num2:");
      	scanf("%d",&num2);
      	
      	printf("enter a operator:");
      	scanf("\n%c",&op);
      	
      	switch(op)
      	{
      		case'+':
      		printf("sum:%d",num1+num2);
      		break;
      		
      		case'-':
      	    printf("sum:%d",num1-num2);
      		break;
      		
      		case'*':
      		printf("sum:%d",num1*num2);
      		break;
      		
      		case'%':
      		printf("sum:%d",num1%num2);
      		break;
      		
      		default:
      		printf("invalid operator");
      	}
      	getch();
      }
    
