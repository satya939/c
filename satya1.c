#include<stdio.h>
int main()
{
	char op;
	int x,y;
	printf("enter any operator\n");
  scanf("%c",&op);
  printf("enter any two integers\n");
  scanf("%d%d",&x,&y);
  if(op=='+')
  {
  	printf("%d",x+y);
  }
 else if(op=='-')
  {
  	printf("%d",x-y);
  }
 else if(op=='*')
  {
  	printf("%d",x*y);
  }
  else if(op=='/')
  {
  	printf("%d",x/y);
  }
 else if(op=='%')
  {
  	printf("%d",x%y);
  }
  else 
  printf("invalid operator");
  return 0;
}
