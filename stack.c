#include <stdio.h>
#include <conio.h>
#define SIZE 10


void push (int stack[], int *Top, int item)
{
  if (*Top == SIZE - 1)
    printf ("Stack Overflow \n");
  else
    {
      *Top = *Top + 1;
      stack[*Top] = item;
    }

}

void pop (int stack[], int Top)
{
  int item;

  if (Top == -1)
    printf ("Stack Underflow \n");
  else
    {
      item = stack[Top];
      printf ("Poped Item is %d \n", item);
      Top = Top - 1;
    }
}

void peek (int stack[], int Top)
{
  printf ("Stack Top is %d \n", stack[Top]);
}

int main ()
{
  int choice, item;
  int STACK[SIZE];
  int Top = -1;

  while (1)
    {

      printf ("Press 1: For Push Operation \n");
      printf ("Press 2: For Pop Operation \n");
      printf ("Press 3: For Peek Operation \n");
      printf ("Press any other character to exit \n");

      printf ("Enter a choice \n");
      scanf ("%d", &choice);

      switch (choice)
	    {
    	case 1:
    	  {
    	    printf ("Enter an item to be pushed into the stack ");
    	    scanf ("%d", &item);
    	    push (STACK, &Top, item);
    	    break;
    	  }
    	case 2:
    	  pop (STACK, Top);
    	  break;
    	case 3:
    	  peek (STACK, Top);
    	  break;
    	default:
    	  exit (0);
    
    	}
    }
  return 0;
}
