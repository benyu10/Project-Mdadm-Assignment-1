
#include "student.h"

int largest(int array[], int length) {
  int i;
  int largest=-10000;

  for (i=0; i < length; i++)
    {
      if (array[i] > largest)
	{
	  largest = array[i];
	}
    
    }

  return largest;
}

int sum(int array[], int length) {
  int i;
  int sum =0;
  
  for (i = 0; i < length; i++)
    {    
      sum = sum  + array[i];
    }
  return sum;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void rotate(int *a, int *b, int *c) {
  int temp = *c;
  *c = *b;
  *b = *a;
  *a = temp;
}

void sort(int array[], int length) {
  int i, n;

  for (i = 0; i < length; i++)
    {
      for (n = 0; n < length-1; n++)
	{
	  if (array[n] > array[n+1]){
	      swap (&array[n], &array[n+1]);
	    }
	    }
	 
    }
}

void double_primes(int array[], int length) {
  int i = 0;
  for (i=0; i < length; i++)
    {
      if (((array[i]%3) != 0) && array[i] > 1)
	{
	  if (array[i] == 2)
	    {
	      array[i] = array[i]*2;
	    }
	  
	    
	  else if( (array[i] %2) != 0)
	    {
	      array[i] = array[i] *2; 
	    }
	  
	  
	}
    }
}

void negate_armstrongs(int array[], int length) {
  int ex();
   //to keep count of digits
  for (int i = 0; i < length; i++)
    {
      int armstrong=0;
      int n=0;
      int counter =0;
      int temp = array[i];
      
      while(temp!=0)
	{
	  temp = temp/10;
	  counter++;
	}
      int num = array[i];
      if (num!=0){
	while (num!=0)
	  {
	    n  = num % 10;
	    armstrong = armstrong + ex(n, counter);
	    num = num /10;	  
	  }
      
      if (array[i]> 0 && array[i] == armstrong)
	{
	  array[i] = array[i] * -1;
	}
      }
    }   
}

int ex(int x, int n)
{
 
  int number = 1;
  
  for (int j=1; j <= n; j++)
    {
      number = number *x;
    }
  return number;
}
