#include<stdio.h>
int main()
{
  int a,b,ch;
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);
  printf("1 Add\n 2 Diff\n 3 Multiply\n 4 Division\n");
  printf("Enter your choose\n");
  scanf("%d",&ch);
  
  switch(ch){
    case 1:
      printf("Sum = %d",a+b);
      break;
    case 2:
      printf("Difference = %d",a-b);
      break;
    case 3:
      printf("Product = %d",a*b);
      break;
    case 4:
      printf("Division = %d",a/b);
      break;
    default:
      printf("Invalid Input");
  }
  return 0;
}
      
    
      
      
