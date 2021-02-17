
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
}

void double_primes(int array[], int length) {
}

void negate_armstrongs(int array[], int length) {
}
